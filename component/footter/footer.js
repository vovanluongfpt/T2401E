import React from "react";
class Footer extends React.Component {
    render(){
        return(
            <>
            <h1> THIS IS FOOOTER </h1>
            <h1>{this.props.name}</h1>
            </>
        )
    }
}
export default Footer;