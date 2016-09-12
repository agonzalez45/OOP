using namespace std;
template<class templ>
class Vec {
	public:
		templ x, y;
		Vec(){
        	x = 0,y = 0;
   		}
    		Vec (templ x, templ y){
        		this->x = x;this->y = y;
    		}
    		Vec operator + (const Vec<templ> &v) const{
		        return Vec(x + v.x, y + v.y);
    		}
		Vec operator - (const Vec<templ> &v) const{
			return Vec(x - v.x, y - v.y);
   	 	}
    		Vec operator * (const templ &n){
			this->x = this->x * n;this->y = this->y * n;
			return Vec(x,y);
    		}
};
template<class N>
ostream& operator<< (ostream& o, const Vec<N> &v){
    o << "(" << v.x << ", " << v.y << ")" << std::endl;
    return o;
}
template<class templ>
class Mat{
	public:
		templ a, b, c, d;
		static Mat<templ> Identity;
		Mat(){
			a = 0,b = 0,c = 0,d = 0;
		}
		Mat(templ a, templ b, templ c, templ d){
			this->a = a,this->b = b,this->c = c,this->d = d;
		}
		Mat operator + (const Mat &m) const{
			return Mat<templ>(this->a + m.a, this->b + m.b, this->c + m.c, this->d + m.d);
		}
		Mat operator - (const Mat &m) const{
			return Mat<templ>(this->a - m.a, this->b - m.b, this->c - m.c, this->d - m.d);
		}
		Mat operator * (const Mat &m) const{
			return Mat<templ>((this->a * m.a) + (this->b * m.c),(this->a * m.b) + (this->b * m.d),(this->c * m.a) + (this->d * m.c),(this->c * m.b) + (this->d * m.d));
		}			
};
		template<class templ2>
		Mat<templ2> Mat<templ2>::Identity = Mat<templ2>(1,0,0,1);
		
		template<class templ>
		Mat<templ> operator * (const templ &n, const Mat<templ> &m){
			return Mat<templ>(n * m.a, n * m.b, n * m.c, n * m.d);
		}
		template<class templ>
		Vec<templ> operator * (const Vec<templ> &v, const Mat<templ> &m){
			return Vec<templ> ((v.x * m.a) + (m.c * v.y), (m.b * v.x) + (m.d * v.y));
		}
