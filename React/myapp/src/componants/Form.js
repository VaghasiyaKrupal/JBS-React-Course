import React, { useState } from 'react'

const Form = () => {


    /* Static Method*/
    // const [name,setName] = useState("")
    // const [email, setEmail] = useState("")
    // const [contact, setContact] = useState("")
    // const [password, setPassword] = useState("")
    // const [gender, setGender] = useState("")

    /*Dinamic Method*/
    const [user, setUser] = useState({
        name: "",
        email: "",
        gender: "",
        contact: "",
        password: "",
    })

    function handleChange(e) {
        const { name, value } = e.target;
        setUser({ ...user, [name]: value });
    }

    function formData() {
        console.log(user);
    }

    return (

        /* // Using static method
        <div className='d-flex justify-content-center align-item-center h-100vh'>
            <div className='container row d-flex justify-content-center'>
                <div className='col-8 border p-5 shadow rounded'>
                    <h1 className='mb-5'>User Form</h1>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputName" className="form-label">Name</label>
                        <input type="text" value={name} onChange={(e) => setName(e.target.value)} className="form-control" id="exampleInputName" />
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputEmail1" className="form-label">Email</label>
                        <input type="email" value={email} onChange={(e) => setEmail(e.target.value)} className="form-control" id="exampleInputEmail1" />
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputGender" className="form-label">Gender</label><br />
                        <input type="radio" id='maleRadio' value="Male" checked={gender === "Male"} onChange={(e) => setGender(e.target.value)} /> Male<br />
                        <input type="radio" id='femaleRadio' value="Female" checked={gender === "Female"} onChange={(e) => setGender(e.target.value)} /> Female
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputContact" className="form-label">Contact</label>
                        <input type="text" value={contact} onChange={(e) => setContact(e.target.value)} className="form-control" id="exampleInputContact" />
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputPassword" className="form-label">Password</label>
                        <input type="password" value={password} onChange={(e) => setPassword(e.target.value)} className="form-control" id="exampleInputPassword" />
                    </div>
                    <div>
                        <input type='button' value={"Submit"} onClick={formData} className='btn btn-primary' />
                    </div>
                </div>
            </div>
        </div>*/

        // Using Dynamic method
        <div className='d-flex justify-content-center align-item-center h-100vh'>
            <div className='container row d-flex justify-content-center'>
                <div className='col-8 border p-5 shadow rounded'>
                    <h1 className='mb-5'>User Form</h1>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputName" className="form-label">Name</label>
                        <input type="text" value={user.name} name='name' onChange={handleChange} className="form-control" id="exampleInputName" />
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputEmail1" className="form-label">Email</label>
                        <input type="email" value={user.email} name='email' onChange={handleChange} className="form-control" id="exampleInputEmail1" />
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputGender" className="form-label">Gender</label><br />
                        <input type="radio" id='maleRadio' value="Male" name='gender' checked={user.gender === "Male"} onChange={handleChange} /> Male<br />
                        <input type="radio" id='femaleRadio' value="Female" name='gender' checked={user.gender === "Female"} onChange={handleChange} /> Female
                    </div>
                    <div className='mb-3 form-group'>
                        <label className='form-label'>Select Cource</label><br />
                        <select name='cource' id='course' value={user.course} onChange={handleChange}>
                            <option value="HTML" onChange={handleChange}>HTML</option>
                            <option value="CSS" onChange={handleChange}>CSS</option>
                            <option value="Javascript" onChange={handleChange}>Javascript</option>
                            <option value="React" onChange={handleChange}>React</option>
                        </select>
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputContact" className="form-label">Contact</label>
                        <input type="text" value={user.contact} name='contact' onChange={handleChange} className="form-control" id="exampleInputContact" />
                    </div>
                    <div className="mb-3 form-group">
                        <label htmlFor="exampleInputPassword" className="form-label">Password</label>
                        <input type="password" value={user.password} name='password' onChange={handleChange} className="form-control" id="exampleInputPassword" />
                    </div>
                    <div>
                        <input type='button' value={"Submit"} onClick={formData} className='btn btn-primary' />
                    </div>
                </div>
            </div>
        </div>
    )
}

export default Form
