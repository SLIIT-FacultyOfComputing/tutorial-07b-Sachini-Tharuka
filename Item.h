// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
       Item();
       Item(int icode, float uprice);
       ~Item();
      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
