
#ifndef BILL_CLASS_H
#define BILL_CLASS_H

#include <string>

/**
  * class bill_class
  * 
  */

class bill_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  bill_class ();

  /**
   * Empty Destructor
   */
  virtual ~bill_class ();

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
  void addbill ()
  {
  }


  /**
   */
  void editbill ()
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

  void billdescription;
  void bill_number;
  void bill_customer_id_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of billdescription
   * @param new_var the new value of billdescription
   */
  void setBilldescription (void new_var)   {
      billdescription = new_var;
  }

  /**
   * Get the value of billdescription
   * @return the value of billdescription
   */
  void getBilldescription ()   {
    return billdescription;
  }

  /**
   * Set the value of bill_number
   * @param new_var the new value of bill_number
   */
  void setBill_number (void new_var)   {
      bill_number = new_var;
  }

  /**
   * Get the value of bill_number
   * @return the value of bill_number
   */
  void getBill_number ()   {
    return bill_number;
  }

  /**
   * Set the value of bill_customer_id_
   * @param new_var the new value of bill_customer_id_
   */
  void setBill_customer_id_ (void new_var)   {
      bill_customer_id_ = new_var;
  }

  /**
   * Get the value of bill_customer_id_
   * @return the value of bill_customer_id_
   */
  void getBill_customer_id_ ()   {
    return bill_customer_id_;
  }
private:


  void initAttributes () ;

};

#endif // BILL_CLASS_H
