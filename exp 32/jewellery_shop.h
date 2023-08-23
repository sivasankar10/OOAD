
#ifndef JEWELLERY_SHOP_H
#define JEWELLERY_SHOP_H

#include <string>

/**
  * class JEWELLERY_SHOP
  * 
  */

class JEWELLERY_SHOP
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  JEWELLERY_SHOP ();

  /**
   * Empty Destructor
   */
  virtual ~JEWELLERY_SHOP ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void get_details ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void add_customer;
  void update_customer;
  void update_stock;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of add_customer
   * @param new_var the new value of add_customer
   */
  void setAdd_customer (void new_var)   {
      add_customer = new_var;
  }

  /**
   * Get the value of add_customer
   * @return the value of add_customer
   */
  void getAdd_customer ()   {
    return add_customer;
  }

  /**
   * Set the value of update_customer
   * @param new_var the new value of update_customer
   */
  void setUpdate_customer (void new_var)   {
      update_customer = new_var;
  }

  /**
   * Get the value of update_customer
   * @return the value of update_customer
   */
  void getUpdate_customer ()   {
    return update_customer;
  }

  /**
   * Set the value of update_stock
   * @param new_var the new value of update_stock
   */
  void setUpdate_stock (void new_var)   {
      update_stock = new_var;
  }

  /**
   * Get the value of update_stock
   * @return the value of update_stock
   */
  void getUpdate_stock ()   {
    return update_stock;
  }
private:


  void initAttributes () ;

};

#endif // JEWELLERY_SHOP_H
