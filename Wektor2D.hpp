class Wektor2D
{
    public:
    Wektor2D() : x(0), y(0) {}
        Wektor2D(double xx, double yy){ 
            x = xx;
            y = yy;
        }

        void   setX(double xx){ 
            x = xx;
        }

        void   setY(double yy){ 
            y = yy;
        }

        double getX(){ 
            return x;
        }

		double getY(){ 
			return y;
		}

        Wektor2D& operator=(const Wektor2D& W){
            if (this != &W)
            {
                x = W.x;
                y = W.y;
            }
            return *this;
        }

        Wektor2D& operator+(const Wektor2D& wekor2){
            Wektor2D* wekor1=new Wektor2D();
            wekor1->x = this->x + wekor2.x;
            wekor1->y = this->y + wekor2.y;
            return *wekor1;
        }

        double  operator*(const Wektor2D& wekor2){ 
            Wektor2D wekor1;
            wekor1.x = this->x * wekor2.x;
            wekor1.y = this->y * wekor2.y;
            double sum = wekor1.x + wekor1.y;
            return sum;
        }

    private:
        double x;
        double y;
};