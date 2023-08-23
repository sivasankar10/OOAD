
#ifndef DONOR_H
#define DONOR_H

#include <string>

/**
  * class donor
  * 
  */

class donor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  donor ();

  /**
   * Empty Destructor
   */
  virtual ~donor ();

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
  void donate ()
  {
  }


  /**
   */
  void register_for_camp ()
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
  void e_mail;
  void phone_number;
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
   * Set the value of e_mail
   * @param new_var the new value of e_mail
   */
  void setE_mail (void new_var)   {
      e_mail = new_var;
  }

  /**
   * Get the value of e_mail
   * @return the value of e_mail
   */
  void getE_mail ()   {
    return e_mail;
  }

  /**
   * Set the value of phone_number
   * @param new_var the new value of phone_number
   */
  void setPhone_number (void new_var)   {
      phone_number = new_var;
  }

  /**
   * Get the value of phone_number
   * @return the value of phone_number
   */
  void getPhone_number ()   {
    return phone_number;
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

#endif // DONOR_H
