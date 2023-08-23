
#ifndef PAYMENT_CLASS_H
#define PAYMENT_CLASS_H

#include <string>

/**
  * class payment_class
  * 
  */

class payment_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment_class ();

  /**
   * Empty Destructor
   */
  virtual ~payment_class ();

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


  /**
   */
  void edit ()
  {
  }


  /**
   */
  void delete ()
  {
  }


  /**
   */
  void search ()
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

  void ID;
  void description;
  void amount;
  void date;
  void customer;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (void new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  void getID ()   {
    return ID;
  }

  /**
   * Set the value of description
   * @param new_var the new value of description
   */
  void setDescription (void new_var)   {
      description = new_var;
  }

  /**
   * Get the value of description
   * @return the value of description
   */
  void getDescription ()   {
    return description;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (void new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  void getAmount ()   {
    return amount;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (void new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  void getDate ()   {
    return date;
  }

  /**
   * Set the value of customer
   * @param new_var the new value of customer
   */
  void setCustomer (void new_var)   {
      customer = new_var;
  }

  /**
   * Get the value of customer
   * @return the value of customer
   */
  void getCustomer ()   {
    return customer;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_CLASS_H
