
#ifndef FEES_CLASS_H
#define FEES_CLASS_H
#include "permission_class.h"

#include <string>

/**
  * class fees_class
  * 
  */

class fees_class : public permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  fees_class ();

  /**
   * Empty Destructor
   */
  virtual ~fees_class ();

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

  void id;
  void amount;
  void type;
  void total;
  void payment;
  void doc_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
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
   * Set the value of type
   * @param new_var the new value of type
   */
  void setType (void new_var)   {
      type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  void getType ()   {
    return type;
  }

  /**
   * Set the value of total
   * @param new_var the new value of total
   */
  void setTotal (void new_var)   {
      total = new_var;
  }

  /**
   * Get the value of total
   * @return the value of total
   */
  void getTotal ()   {
    return total;
  }

  /**
   * Set the value of payment
   * @param new_var the new value of payment
   */
  void setPayment (void new_var)   {
      payment = new_var;
  }

  /**
   * Get the value of payment
   * @return the value of payment
   */
  void getPayment ()   {
    return payment;
  }

  /**
   * Set the value of doc_id
   * @param new_var the new value of doc_id
   */
  void setDoc_id (void new_var)   {
      doc_id = new_var;
  }

  /**
   * Get the value of doc_id
   * @return the value of doc_id
   */
  void getDoc_id ()   {
    return doc_id;
  }
private:


  void initAttributes () ;

};

#endif // FEES_CLASS_H
