
#ifndef CUSTOMER_CLASS_H
#define CUSTOMER_CLASS_H

#include <string>

/**
  * class customer_class
  * 
  */

class customer_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer_class ();

  /**
   * Empty Destructor
   */
  virtual ~customer_class ();

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
  void addcustomer ()
  {
  }


  /**
   */
  void searchcustomer ()
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

  void customer_id;
  void customer_name;
  void customer_mobile_;
  void customer_address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customer_id
   * @param new_var the new value of customer_id
   */
  void setCustomer_id (void new_var)   {
      customer_id = new_var;
  }

  /**
   * Get the value of customer_id
   * @return the value of customer_id
   */
  void getCustomer_id ()   {
    return customer_id;
  }

  /**
   * Set the value of customer_name
   * @param new_var the new value of customer_name
   */
  void setCustomer_name (void new_var)   {
      customer_name = new_var;
  }

  /**
   * Get the value of customer_name
   * @return the value of customer_name
   */
  void getCustomer_name ()   {
    return customer_name;
  }

  /**
   * Set the value of customer_mobile_
   * @param new_var the new value of customer_mobile_
   */
  void setCustomer_mobile_ (void new_var)   {
      customer_mobile_ = new_var;
  }

  /**
   * Get the value of customer_mobile_
   * @return the value of customer_mobile_
   */
  void getCustomer_mobile_ ()   {
    return customer_mobile_;
  }

  /**
   * Set the value of customer_address
   * @param new_var the new value of customer_address
   */
  void setCustomer_address (void new_var)   {
      customer_address = new_var;
  }

  /**
   * Get the value of customer_address
   * @return the value of customer_address
   */
  void getCustomer_address ()   {
    return customer_address;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_CLASS_H
