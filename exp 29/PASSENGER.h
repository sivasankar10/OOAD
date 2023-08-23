
#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

/**
  * class PASSENGER
  * 
  */

class PASSENGER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  PASSENGER ();

  /**
   * Empty Destructor
   */
  virtual ~PASSENGER ();

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
  void update ()
  {
  }


  /**
   */
  void check_ticket ()
  {
  }


  /**
   */
  void check_payment ()
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

  void name;
  void age;
  void phn_number;
  void address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (void new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  void getAge ()   {
    return age;
  }

  /**
   * Set the value of phn_number
   * @param new_var the new value of phn_number
   */
  void setPhn_number (void new_var)   {
      phn_number = new_var;
  }

  /**
   * Get the value of phn_number
   * @return the value of phn_number
   */
  void getPhn_number ()   {
    return phn_number;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (void new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // PASSENGER_H
