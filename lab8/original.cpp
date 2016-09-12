# include <iostream>
# include "app_window.h"
#include "Rect.h"
using namespace std;
AppWindow::AppWindow ( const char* label, int x, int y, int w, int h )
          :GlutWindow ( label, x, y, w, h )
 {
   _markx = 0;
   _marky = 0;
   addMenuEntry ( "Option 0", evOption0 );
   addMenuEntry ( "Option 1", evOption1 );
     //adding the squares into the vector
     stash.push_back(new Rect(-0.6, 0.7, 0.8, 0.6, 1.0, 0.0, 0.0));
     stash.push_back(new Rect(-0.2, 0.2, 0.8, 0.6, 0.0, 1.0, 0.0));
     stash.push_back(new Rect(0.1, 0.7, 0.8, 0.6, 0.0, 0.0, 1.0));
     
     
     xOffset=0;
     yOffset=0;
     
     
     mouseDown=false;
     dragging=false;
 }

// mouse events are in window coordinates, but your scene is in [0,1]x[0,1],
// so make here the conversion when needed
void AppWindow::windowToScene ( float& x, float &y )
 {
   x = (2.0f*(x/float(_w))) - 1.0f;
   y = 1.0f - (2.0f*(y/float(_h)));
 }

// Called every time there is a window event
void AppWindow::handle ( const Event& e )
 {
   bool rd=true;

   if ( e.type==Keyboard ) 
    switch ( e.key )
    { case ' ': // space bar
	   std::cout << "Space pressed.\n";
       _markx = 1.5;
       _marky = 1.5;
       redraw();
	   break;

	  case 27: // Esc was pressed
	   exit(1);
	}

   if ( e.type==MouseDown || e.type==Motion)
    { _markx=(float)e.mx;
      _marky=(float)e.my;
      windowToScene(_markx,_marky);
        
    Vec mousePos = Vec(_markx, _marky);
    if(!mouseDown){
        for(vector<Rect*>::iterator i = stash.begin(); i !=stash.end(); i++)
        {
                (*i)->deselect();
        }
        
        
       // Vec mousePos = Vec( _markx, _marky);
        for(vector<Rect*>::iterator i = stash.begin(); i !=stash.end(); i++)
        {
            if((*i)->contains(mousePos)){
                (*i)->select();
                /*
                dragging = true;
                
                xOffset = _markx - (*i)->x;
                yOffset = (*i)->y - _marky;
                */
                Rect * temp = *i;
                stash.erase(i);
                stash.insert(stash.begin(), temp);
                
                if(stash[0]->getY() - _marky <= 0.1){/////////////////////
                    dragging = true;
                    
                    xOffset = _markx - (*i)->x;
                    yOffset = (*i)->y - _marky;
                    
                }
                else {
                    stash[0]->handle( _markx, _marky);
                }
                    break;
           
            }
        }
    }
        mouseDown=true;
        if(dragging){
        Rect * top = stash[0];
        
        top->setX(_markx - xOffset);
        top->setY(_marky + yOffset);

        }
        
    }
     if(e.type==MouseUp)
     {
         mouseDown = false;
         dragging = false;
     }

   if ( e.type==Menu )
    { std::cout<<"Menu Event: "<<e.menuev<<std::endl;
      rd=false; // no need to redraw
    }

   const float incx=0.02f;
   const float incy=0.02f;
   if ( e.type==SpecialKey )
    switch ( e.key )
    { case GLUT_KEY_LEFT:  _markx-=incx; break;
      case GLUT_KEY_RIGHT: _markx+=incx; break;
      case GLUT_KEY_UP:    _marky+=incy; break;
      case GLUT_KEY_DOWN:  _marky-=incy; break;
      default: rd=false; // no redraw
	}

   if (rd) redraw(); // ask the window to be rendered when possible
}

void AppWindow::resize ( int w, int h )
 {
   // Define that OpenGL should use the whole window for rendering
   glViewport( 0, 0, w, h );
   _w=w; _h=h;
 }

// here we will redraw the scene according to the current state of the application.
void AppWindow::draw ()
 {
   // Clear the rendering window
   glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

   // Clear the trasnformation stack
   glMatrixMode( GL_MODELVIEW );
   glLoadIdentity();


     for(vector<Rect*>::iterator i = stash.begin(); i !=stash.end(); i++)
     {
         (*i)->draw();
         
         /*
         Vec tl, tr, br, bl;
         
         tl = Vec((*i)->x, (*i)->y);
         tr = Vec((*i)->x + (*i)->w, (*i)->y);
         br = Vec((*i)->x + (*i)->w, (*i)->y - (*i)->h);
         bl = Vec((*i)->x, (*i)->y - (*i)->h);
         float r, g, b;
         r = (*i)->r;
         g = (*i)->g;
         b = (*i)->bl;
                  
         glColor3f(r, g, b);
         glBegin(GL_POLYGON);
         glVertex2f(tl.x, tl.y);
         glVertex2f(tr.x, tr.y);
         glVertex2f(br.x, br.y);
         glVertex2f(bl.x, bl.y);
         
         glVertex2f(tl.x, tl.y-0.1);
         glVertex2f(tr.x, tr.y-0.1);
         
         glEnd();
         
         for(std::vector<Vec*>::iterator i = points.begin(); i != points.emd(); i++){
             
             glBegin(GL_POINTS);
             
             
         }
         
         if((*i)->selected())
         {
             glColor3f(1.0, 1.0, 1.0);
             glBegin(GL_LINES);
             
             glVertex2f(tl.x, tl.y-0.1);
             glVertex2f(tr.x, tr.y-0.1);
             
             glVertex2f(tl.x, tl.y);
             glVertex2f(tr.x, tr.y);
             
             glVertex2f(tr.x, tr.y);
             glVertex2f(br.x, br.y);
             
             glVertex2f(br.x, br.y);
             glVertex2f(bl.x, bl.y);
             
             glVertex2f(bl.x, bl.y);
             glVertex2f(tl.x, tl.y);
             
             glEnd();
         }
     }
     */
     
   /* you may use GL_POLYGON for generic *convex* polygons, like this:
   glBegin( GL_POLYGON );
   glColor3f ( ... );
   glVertex2d ( ... );
   glVertex2d ( ... );
   glVertex2d ( ... );
   glVertex2d ( ... );
   glEnd();*/

   // Swap buffers
   glFlush();         // flush the pipeline (usually not necessary)
   glutSwapBuffers(); // we were drawing to the back buffer, now bring it to the front
}
 }
