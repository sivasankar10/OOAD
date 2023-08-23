
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class admin
  * 
  */

class admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admin ();

  /**
   * Empty Destructor
   */
  virtual ~admin ();

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
  void updatecatalog ()
  {
  }


  /**
   */
  void additems ()
  {
  }


  /**
   */
  void removeitems ()
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
  void ID;
  void E_mail;
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
   * Set the value of E_mail
   * @param new_var the new value of E_mail
   */
  void setE_mail (void new_var)   {
      E_mail = new_var;
  }

  /**
   * Get the value of E_mail
   * @return the value of E_mail
   */
  void getE_mail ()   {
    return E_mail;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H
