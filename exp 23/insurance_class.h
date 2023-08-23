
#ifndef INSURANCE_CLASS_H
#define INSURANCE_CLASS_H
#include "permission_class.h"

#include <string>

/**
  * class insurance_class
  * 
  */

class insurance_class : public permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  insurance_class ();

  /**
   * Empty Destructor
   */
  virtual ~insurance_class ();

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
  void search ()
  {
  }


  /**
   */
  void delete ()
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
  void insurance_no;
  void insurance_type;
  void premium;
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
   * Set the value of insurance_no
   * @param new_var the new value of insurance_no
   */
  void setInsurance_no (void new_var)   {
      insurance_no = new_var;
  }

  /**
   * Get the value of insurance_no
   * @return the value of insurance_no
   */
  void getInsurance_no ()   {
    return insurance_no;
  }

  /**
   * Set the value of insurance_type
   * @param new_var the new value of insurance_type
   */
  void setInsurance_type (void new_var)   {
      insurance_type = new_var;
  }

  /**
   * Get the value of insurance_type
   * @return the value of insurance_type
   */
  void getInsurance_type ()   {
    return insurance_type;
  }

  /**
   * Set the value of premium
   * @param new_var the new value of premium
   */
  void setPremium (void new_var)   {
      premium = new_var;
  }

  /**
   * Get the value of premium
   * @return the value of premium
   */
  void getPremium ()   {
    return premium;
  }
private:


  void initAttributes () ;

};

#endif // INSURANCE_CLASS_H
