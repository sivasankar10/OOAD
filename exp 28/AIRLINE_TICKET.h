
#ifndef AIRLINE_TICKET_H
#define AIRLINE_TICKET_H

#include <string>

/**
  * class AIRLINE_TICKET
  * 
  */

class AIRLINE_TICKET
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  AIRLINE_TICKET ();

  /**
   * Empty Destructor
   */
  virtual ~AIRLINE_TICKET ();

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
  void calculate ()
  {
  }


  /**
   */
  void update ()
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

  void id_;
  void number;
  void price;
  void detail;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id_
   * @param new_var the new value of id_
   */
  void setId_ (void new_var)   {
      id_ = new_var;
  }

  /**
   * Get the value of id_
   * @return the value of id_
   */
  void getId_ ()   {
    return id_;
  }

  /**
   * Set the value of number
   * @param new_var the new value of number
   */
  void setNumber (void new_var)   {
      number = new_var;
  }

  /**
   * Get the value of number
   * @return the value of number
   */
  void getNumber ()   {
    return number;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (void new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  void getPrice ()   {
    return price;
  }

  /**
   * Set the value of detail
   * @param new_var the new value of detail
   */
  void setDetail (void new_var)   {
      detail = new_var;
  }

  /**
   * Get the value of detail
   * @return the value of detail
   */
  void getDetail ()   {
    return detail;
  }
private:


  void initAttributes () ;

};

#endif // AIRLINE_TICKET_H
