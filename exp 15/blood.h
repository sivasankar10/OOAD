
#ifndef BLOOD_H
#define BLOOD_H

#include <string>

/**
  * class blood
  * 
  */

class blood
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  blood ();

  /**
   * Empty Destructor
   */
  virtual ~blood ();

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
  void subtract ()
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

  void blood_type;
  void code;
  void info;
  void price;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of blood_type
   * @param new_var the new value of blood_type
   */
  void setBlood_type (void new_var)   {
      blood_type = new_var;
  }

  /**
   * Get the value of blood_type
   * @return the value of blood_type
   */
  void getBlood_type ()   {
    return blood_type;
  }

  /**
   * Set the value of code
   * @param new_var the new value of code
   */
  void setCode (void new_var)   {
      code = new_var;
  }

  /**
   * Get the value of code
   * @return the value of code
   */
  void getCode ()   {
    return code;
  }

  /**
   * Set the value of info
   * @param new_var the new value of info
   */
  void setInfo (void new_var)   {
      info = new_var;
  }

  /**
   * Get the value of info
   * @return the value of info
   */
  void getInfo ()   {
    return info;
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
private:


  void initAttributes () ;

};

#endif // BLOOD_H
