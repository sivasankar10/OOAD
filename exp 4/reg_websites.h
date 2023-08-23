
#ifndef REG_WEBSITES_H
#define REG_WEBSITES_H

#include <string>

/**
  * class reg_websites
  * 
  */

class reg_websites
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reg_websites ();

  /**
   * Empty Destructor
   */
  virtual ~reg_websites ();

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
  void verification ()
  {
  }


  /**
   */
  void processing ()
  {
  }


  /**
   */
  void registration ()
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

  void qualification;
  void login_detalis;
  void fee_details;
  void exam_date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of qualification
   * @param new_var the new value of qualification
   */
  void setQualification (void new_var)   {
      qualification = new_var;
  }

  /**
   * Get the value of qualification
   * @return the value of qualification
   */
  void getQualification ()   {
    return qualification;
  }

  /**
   * Set the value of login_detalis
   * @param new_var the new value of login_detalis
   */
  void setLogin_detalis (void new_var)   {
      login_detalis = new_var;
  }

  /**
   * Get the value of login_detalis
   * @return the value of login_detalis
   */
  void getLogin_detalis ()   {
    return login_detalis;
  }

  /**
   * Set the value of fee_details
   * @param new_var the new value of fee_details
   */
  void setFee_details (void new_var)   {
      fee_details = new_var;
  }

  /**
   * Get the value of fee_details
   * @return the value of fee_details
   */
  void getFee_details ()   {
    return fee_details;
  }

  /**
   * Set the value of exam_date
   * @param new_var the new value of exam_date
   */
  void setExam_date (void new_var)   {
      exam_date = new_var;
  }

  /**
   * Get the value of exam_date
   * @return the value of exam_date
   */
  void getExam_date ()   {
    return exam_date;
  }
private:


  void initAttributes () ;

};

#endif // REG_WEBSITES_H
