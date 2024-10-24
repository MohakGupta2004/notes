Simple Mail Transfer Protocol is also similar to "Send Mail To People" does one thing which is :-
You wrote an email and sent to X => it goes to your smtp server (mail server) => the mail server sends that to X's mail server => X downloads the email using POP3 protocol.

## SMTP Enumeration

Some built in smtp commands if you logged into the server would be

VRFY => Validates users (more like: sudo mohak (check if this is correct or not))
EXPN=> Checks the delivery addresses of a person (ls -al mohak)
RCPT TO => Tells who is the receiver.

Attackers use telnet for smtp and collect list of valid users on the SMTP server.

Either use metasploit for enumeration purposes.