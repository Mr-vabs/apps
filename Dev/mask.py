EmailList = ['testsample@gmail.com',"test.sample12@gmail.com","sample.test@yahoo.co.in",
'abc@rediffmail.com','abc@programmingisfun.in',"ProgrammingIsfun@youtube.com"]


def mask_domain(domain):
    d_list = domain.split('.')
    last_domain = '.' + d_list.pop()
    d_list = '.'.join(d_list)
    length = len(d_list)
    username = d_list.replace(d_list[1: length], '*' * (length - 1))
    return username + last_domain

def mask_username(username):
    length = len(username)
    username = username.replace(username[1: length - 1], '*' * (length - 2))
    return username


def mask_email(email):
    username, domain_name = email.split('@')
    result = mask_username(username) + '@' + mask_domain(domain_name)
    return result



for email in EmailList:
    print(mask_email(email))
