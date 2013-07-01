#ifndef __CELL_HPP_
#define __CELL_HPP_

class Cell {
      private:
              int material;
              int nextTemp;
              int currentTemp;
              int* leftCell;
              int* rightCell;
              int* upCell;
              int* bottomCell;
              
      public:
             void setCurrentTemp(int);  
             int getCurrentTemp();      
             int setMaterial(int);
             int getMaterial();
};

#endif
