
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class customer
  * 
  */

class customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer ();

  /**
   * Empty Destructor
   */
  virtual ~customer ();

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
  void bil_section ()
  {
  }


  /**
   */
  void card ()
  {
  }


  /**
   */
  void house ()
  {
  }


  /**
   */
  void reports ()
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

  void cus_name;
  void cus_hs_no;
  void cus_area;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of cus_name
   * @param new_var the new value of cus_name
   */
  void setCus_name (void new_var)   {
      cus_name = new_var;
  }

  /**
   * Get the value of cus_name
   * @return the value of cus_name
   */
  void getCus_name ()   {
    return cus_name;
  }

  /**
   * Set the value of cus_hs_no
   * @param new_var the new value of cus_hs_no
   */
  void setCus_hs_no (void new_var)   {
      cus_hs_no = new_var;
  }

  /**
   * Get the value of cus_hs_no
   * @return the value of cus_hs_no
   */
  void getCus_hs_no ()   {
    return cus_hs_no;
  }

  /**
   * Set the value of cus_area
   * @param new_var the new value of cus_area
   */
  void setCus_area (void new_var)   {
      cus_area = new_var;
  }

  /**
   * Get the value of cus_area
   * @return the value of cus_area
   */
  void getCus_area ()   {
    return cus_area;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
