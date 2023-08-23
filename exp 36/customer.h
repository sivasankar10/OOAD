
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class customer
  * 
  */

class customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer ();

  /**
   * Empty Destructor
   */
  virtual ~customer ();

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
  void add ()
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

  void customer_details;
  void new_attribute;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customer_details
   * @param new_var the new value of customer_details
   */
  void setCustomer_details (void new_var)   {
      customer_details = new_var;
  }

  /**
   * Get the value of customer_details
   * @return the value of customer_details
   */
  void getCustomer_details ()   {
    return customer_details;
  }

  /**
   * Set the value of new_attribute
   * @param new_var the new value of new_attribute
   */
  void setNew_attribute (void new_var)   {
      new_attribute = new_var;
  }

  /**
   * Get the value of new_attribute
   * @return the value of new_attribute
   */
  void getNew_attribute ()   {
    return new_attribute;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
