
#ifndef BUYER_CLASS_H
#define BUYER_CLASS_H

#include <string>
#include vector



/**
  * class buyer_class
  * 
  */

class buyer_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  buyer_class ();

  /**
   * Empty Destructor
   */
  virtual ~buyer_class ();

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
  void name;
  void mobile;
  void e_mail;
  void address;
  void username;
  void password;
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
   * Set the value of mobile
   * @param new_var the new value of mobile
   */
  void setMobile (void new_var)   {
      mobile = new_var;
  }

  /**
   * Get the value of mobile
   * @return the value of mobile
   */
  void getMobile ()   {
    return mobile;
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

  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (void new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // BUYER_CLASS_H
