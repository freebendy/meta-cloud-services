# package_regex_openstack.inc - This file contains data that tracks
# upstream project associated with a given recipe. This list is needed
# for recipes that version information can not be automagically discovered.
# As we automate this checking, this file will slowly be reduced.
#
# This data is used by the auto-upgrade-helper, to use it, you could
# add the following to your conf/local.conf:
#   --------------- snip ---------------
#   INHERIT =+ "distrodata"
#   require conf/distro/include/package_regex_openstack.inc
#   --------------- snip ---------------
#
# Fore more details about auto-upgrade-help, please refer to:
#   http://git.yoctoproject.org/cgit/cgit.cgi/auto-upgrade-helper/tree/README
#
# The format is as a bitbake variable override for each recipe
#
#       REGEX_URI_pn-<recipe name> = "recipe_url"
#	 - This is the url used by the package checking system to
#	   get the latest version of the package
#       REGEX_pn-<recipe name> = "package_regex"
#	 - This is the regex the package checking system uses to
#	   parse the page found at REGEX_URI_pn-<recipe name>
#

COMMON_REGEX = "(?P<pver>(\d+[\.-_]*)+)"

# PyPI sites
REGEX_URI_pn-python-cephclient = "https://pypi.python.org/pypi/python-cephclient/"
REGEX_pn-python-cephclient = "/python-cephclient/${COMMON_REGEX}"
REGEX_URI_pn-python-hp3parclient = "https://pypi.python.org/pypi/hp3parclient/"
REGEX_pn-python-hp3parclient = "/hp3parclient/${COMMON_REGEX}"
REGEX_URI_pn-python-openstackclient = "https://pypi.python.org/pypi/python-openstackclient/"
REGEX_pn-python-openstackclient = "/python-openstackclient/${COMMON_REGEX}"

REGEX_URI_pn-python-alembic = "https://pypi.python.org/pypi/alembic"
REGEX_pn-python-alembic = "/alembic/(?P<pver>\d+\.\d+\.\d+(\..*)?)"
REGEX_URI_pn-python-amqp = "https://pypi.python.org/pypi/amqp"
REGEX_pn-python-amqp = "/amqp/${COMMON_REGEX}"
REGEX_URI_pn-python-anyjson = "https://pypi.python.org/pypi/anyjson"
REGEX_pn-python-anyjson = "/anyjson/${COMMON_REGEX}"
REGEX_URI_pn-python-babel = "https://pypi.python.org/pypi/Babel"
REGEX_pn-python-babel = "/Babel/${COMMON_REGEX}"
REGEX_URI_pn-python-beautifulsoup4 = "https://pypi.python.org/pypi/beautifulsoup4"
REGEX_pn-python-beautifulsoup4 = "/beautifulsoup4/${COMMON_REGEX}"
REGEX_URI_pn-python-cephclient = "https://pypi.python.org/pypi/python-cephclient"
REGEX_pn-python-cephclient = "/python-cephclient/${COMMON_REGEX}"
REGEX_URI_pn-python-cliff = "https://pypi.python.org/pypi/cliff"
REGEX_pn-python-cliff = "/cliff/${COMMON_REGEX}"
REGEX_URI_pn-python-cmd2 = "https://pypi.python.org/pypi/cmd2"
REGEX_pn-python-cmd2 = "/cmd2/${COMMON_REGEX}"
REGEX_URI_pn-python-colorama = "https://pypi.python.org/pypi/colorama"
REGEX_pn-python-colorama = "/colorama/${COMMON_REGEX}"
REGEX_URI_pn-python-coverage = "https://pypi.python.org/pypi/coverage"
REGEX_pn-python-coverage = "/coverage/(?P<pver>\d+\.\d+(\.)?(a)?(\d)+)"
REGEX_URI_pn-python-croniter = "https://pypi.python.org/pypi/croniter"
REGEX_pn-python-croniter = "/croniter/${COMMON_REGEX}"
REGEX_URI_pn-python-cssselect = "https://pypi.python.org/pypi/cssselect"
REGEX_pn-python-cssselect = "/cssselect/${COMMON_REGEX}"
REGEX_URI_pn-python-decorator = "https://pypi.python.org/pypi/decorator"
REGEX_pn-python-decorator = "/decorator/${COMMON_REGEX}"
REGEX_URI_pn-python-django = "https://pypi.python.org/pypi/Django"
REGEX_pn-python-django = "/Django/${COMMON_REGEX}"
REGEX_URI_pn-python-django-appconf = "https://pypi.python.org/pypi/django-appconf"
REGEX_pn-python-django-appconf = "/django-appconf/${COMMON_REGEX}"
REGEX_URI_pn-python-django-compressor = "https://pypi.python.org/pypi/django_compressor"
REGEX_pn-python-django-compressor = "/django_compressor/${COMMON_REGEX}"
REGEX_URI_pn-python-django-nose = "https://pypi.python.org/pypi/django-nose"
REGEX_pn-python-django-nose = "/django-nose/${COMMON_REGEX}"
REGEX_URI_pn-python-django-openstack-auth = "https://pypi.python.org/pypi/django_openstack_auth"
REGEX_pn-python-django-openstack-auth = "/django_openstack_auth/${COMMON_REGEX}"
REGEX_URI_pn-python-django-pyscss = "https://pypi.python.org/pypi/django-pyscss"
REGEX_pn-python-django-pyscss = "/django-pyscss/${COMMON_REGEX}"
REGEX_URI_pn-python-dogpile.cache = "https://pypi.python.org/pypi/dogpile.cache"
REGEX_pn-python-dogpile.cache = "/dogpile.cache/${COMMON_REGEX}"
REGEX_URI_pn-python-dogpile.core = "https://pypi.python.org/pypi/dogpile.core"
REGEX_pn-python-dogpile.core = "/dogpile.core/${COMMON_REGEX}"
REGEX_URI_pn-python-eventlet = "https://pypi.python.org/pypi/eventlet"
REGEX_pn-python-eventlet = "/eventlet/${COMMON_REGEX}"
REGEX_URI_pn-python-extras = "https://pypi.python.org/pypi/extras"
REGEX_pn-python-extras = "/extras/${COMMON_REGEX}"
REGEX_URI_pn-python-falcon = "https://pypi.python.org/pypi/falcon"
REGEX_pn-python-falcon = "/falcon/${COMMON_REGEX}"
REGEX_URI_pn-python-fixtures = "https://pypi.python.org/pypi/fixtures"
REGEX_pn-python-fixtures = "/fixtures/${COMMON_REGEX}"
REGEX_URI_pn-python-flake8 = "https://pypi.python.org/pypi/flake8"
REGEX_pn-python-flake8 = "/flake8/${COMMON_REGEX}"
REGEX_URI_pn-python-futures = "https://pypi.python.org/pypi/futures"
REGEX_pn-python-futures = "/futures/${COMMON_REGEX}"
REGEX_URI_pn-python-greenlet = "https://pypi.python.org/pypi/"
REGEX_pn-python-greenlet = "//${COMMON_REGEX}"
REGEX_URI_pn-python-happybase = "https://pypi.python.org/pypi/happybase"
REGEX_pn-python-happybase = "/happybase/${COMMON_REGEX}"
REGEX_URI_pn-python-heat-cfntools = "https://pypi.python.org/pypi/heat-cfntools"
REGEX_pn-python-heat-cfntools = "/heat-cfntools/${COMMON_REGEX}"
REGEX_URI_pn-python-hgtools = "https://pypi.python.org/pypi/hgtools"
REGEX_pn-python-hgtools = "/hgtools/${COMMON_REGEX}"
REGEX_URI_pn-python-hp3parclient = "https://pypi.python.org/pypi/hp3parclient"
REGEX_pn-python-hp3parclient = "/hp3parclient/${COMMON_REGEX}"
REGEX_URI_pn-python-html5lib = "https://pypi.python.org/pypi/html5lib"
REGEX_pn-python-html5lib = "/html5lib/${COMMON_REGEX}"
REGEX_URI_pn-python-httplib2 = "https://pypi.python.org/pypi/httplib2"
REGEX_pn-python-httplib2 = "/httplib2/${COMMON_REGEX}"
REGEX_URI_pn-python-httpretty = "https://pypi.python.org/pypi/httpretty"
REGEX_pn-python-httpretty = "/httpretty/${COMMON_REGEX}"
REGEX_URI_pn-python-i18n = "https://pypi.python.org/pypi/python-i18n"
REGEX_pn-python-i18n = "/python-i18n/${COMMON_REGEX}"
REGEX_URI_pn-python-ipaddr = "https://pypi.python.org/pypi/ipaddr"
REGEX_pn-python-ipaddr = "/ipaddr/${COMMON_REGEX}"
REGEX_URI_pn-python-iso8601 = "https://pypi.python.org/pypi/iso8601"
REGEX_pn-python-iso8601 = "/iso8601/${COMMON_REGEX}"
REGEX_URI_pn-python-jinja2 = "https://pypi.python.org/pypi/Jinja2"
REGEX_pn-python-jinja2 = "/Jinja2/${COMMON_REGEX}"
REGEX_URI_pn-python-jsonpatch = "https://pypi.python.org/pypi/jsonpatch"
REGEX_pn-python-jsonpatch = "/jsonpatch/${COMMON_REGEX}"
REGEX_URI_pn-python-jsonpath-rw = "https://pypi.python.org/pypi/jsonpath-rw"
REGEX_pn-python-jsonpath-rw = "/jsonpath-rw/${COMMON_REGEX}"
REGEX_URI_pn-python-jsonpointer = "https://pypi.python.org/pypi/jsonpointer"
REGEX_pn-python-jsonpointer = "/jsonpointer/${COMMON_REGEX}"
REGEX_URI_pn-python-jsonschema = "https://pypi.python.org/pypi/jsonschema"
REGEX_pn-python-jsonschema = "/jsonschema/${COMMON_REGEX}"
REGEX_URI_pn-python-kazoo = "https://pypi.python.org/pypi/kazoo"
REGEX_pn-python-kazoo = "/kazoo/${COMMON_REGEX}"
REGEX_URI_pn-python-keyring = "https://pypi.python.org/pypi/keyring"
REGEX_pn-python-keyring = "/keyring/${COMMON_REGEX}"
REGEX_URI_pn-python-kombu = "https://pypi.python.org/pypi/kombu"
REGEX_pn-python-kombu = "/kombu/${COMMON_REGEX}"
REGEX_URI_pn-python-lesscpy = "https://pypi.python.org/pypi/lesscpy"
REGEX_pn-python-lesscpy = "/lesscpy/${COMMON_REGEX}"
REGEX_URI_pn-python-lockfile = "https://pypi.python.org/pypi/lockfile"
REGEX_pn-python-lockfile = "/lockfile/${COMMON_REGEX}"
REGEX_URI_pn-python-logutils = "https://pypi.python.org/pypi/logutils"
REGEX_pn-python-logutils = "/logutils/${COMMON_REGEX}"
REGEX_URI_pn-python-lxml = "https://pypi.python.org/pypi/lxml"
REGEX_pn-python-lxml = "/lxml/${COMMON_REGEX}"
REGEX_URI_pn-python-mako = "https://pypi.python.org/pypi/Mako"
REGEX_pn-python-mako = "/Mako/${COMMON_REGEX}"
REGEX_URI_pn-python-markupsafe = "https://pypi.python.org/pypi/MarkupSafe"
REGEX_pn-python-markupsafe = "/MarkupSafe/${COMMON_REGEX}"
REGEX_URI_pn-python-mccabe = "https://pypi.python.org/pypi/mccabe"
REGEX_pn-python-mccabe = "/mccabe/${COMMON_REGEX}"
REGEX_URI_pn-python-memcache = "https://pypi.python.org/pypi/pymemcache"
REGEX_pn-python-memcache = "/pymemcache/${COMMON_REGEX}"
REGEX_URI_pn-python-memcached = "https://pypi.python.org/pypi/"
REGEX_pn-python-memcached = "//${COMMON_REGEX}"
REGEX_URI_pn-python-mimeparse = "https://pypi.python.org/pypi/python-mimeparse"
REGEX_pn-python-mimeparse = "/python-mimeparse/${COMMON_REGEX}"
REGEX_URI_pn-python-mock = "https://pypi.python.org/pypi/mock"
REGEX_pn-python-mock = "/mock/${COMMON_REGEX}"
REGEX_URI_pn-python-mox = "https://pypi.python.org/pypi/mox"
REGEX_pn-python-mox = "/mox/${COMMON_REGEX}"
REGEX_URI_pn-python-mox3 = "https://pypi.python.org/pypi/mox3"
REGEX_pn-python-mox3 = "/mox3/${COMMON_REGEX}"
REGEX_URI_pn-python-msgpack = "https://pypi.python.org/pypi/msgpack-python"
REGEX_pn-python-msgpack = "/msgpack-python/${COMMON_REGEX}"
REGEX_URI_pn-python-netaddr = "https://pypi.python.org/pypi/netaddr"
REGEX_pn-python-netaddr = "/netaddr/${COMMON_REGEX}"
REGEX_URI_pn-python-netifaces = "https://pypi.python.org/pypi/netifaces"
REGEX_pn-python-netifaces = "/netifaces/${COMMON_REGEX}"
REGEX_URI_pn-python-networkx = "https://pypi.python.org/pypi/networkx"
REGEX_pn-python-networkx = "/networkx/${COMMON_REGEX}"
REGEX_URI_pn-python-nose-exclude = "https://pypi.python.org/pypi/nose-exclude"
REGEX_pn-python-nose-exclude = "/nose-exclude/${COMMON_REGEX}"
REGEX_URI_pn-python-oauth2 = "https://pypi.python.org/pypi/oauth2"
REGEX_pn-python-oauth2 = "/oauth2/${COMMON_REGEX}"
REGEX_URI_pn-python-oauthlib = "https://pypi.python.org/pypi/oauthlib"
REGEX_pn-python-oauthlib = "/oauthlib/${COMMON_REGEX}"
REGEX_URI_pn-python-openstackclient = "https://pypi.python.org/pypi/python-openstackclient"
REGEX_pn-python-openstackclient = "/python-openstackclient/${COMMON_REGEX}"
REGEX_URI_pn-python-openstack-nose = "https://pypi.python.org/pypi/openstack.nose_plugin"
REGEX_pn-python-openstack-nose = "/openstack.nose_plugin/${COMMON_REGEX}"
REGEX_URI_pn-python-oslo.concurrency = "https://pypi.python.org/pypi/oslo.concurrency"
REGEX_pn-python-oslo.concurrency = "/oslo.concurrency/${COMMON_REGEX}"
REGEX_URI_pn-python-oslo.config = "https://pypi.python.org/pypi/oslo.config"
REGEX_pn-python-oslo.config = "/oslo.config/${COMMON_REGEX}"
REGEX_URI_pn-python-oslo.db = "https://pypi.python.org/pypi/oslo.db"
REGEX_pn-python-oslo.db = "/oslo.db/${COMMON_REGEX}"
REGEX_URI_pn-python-oslo.i18n = "https://pypi.python.org/pypi/oslo.i18n"
REGEX_pn-python-oslo.i18n = "/oslo.i18n/${COMMON_REGEX}"
REGEX_URI_pn-python-oslo.middleware = "https://pypi.python.org/pypi/oslo.middleware"
REGEX_pn-python-oslo.middleware = "/oslo.middleware/${COMMON_REGEX}"
REGEX_URI_pn-python-oslo.rootwrap = "https://pypi.python.org/pypi/oslo.rootwrap"
REGEX_pn-python-oslo.rootwrap = "/oslo.rootwrap/${COMMON_REGEX}"
REGEX_URI_pn-python-oslotest = "https://pypi.python.org/pypi/oslotest"
REGEX_pn-python-oslotest = "/oslotest/${COMMON_REGEX}"
REGEX_URI_pn-python-osprofiler = "https://pypi.python.org/pypi/osprofiler"
REGEX_pn-python-osprofiler = "/osprofiler/${COMMON_REGEX}"
REGEX_URI_pn-python-pam = "https://pypi.python.org/pypi/pam"
REGEX_pn-python-pam = "/pam/${COMMON_REGEX}"
REGEX_URI_pn-python-paramiko = "https://pypi.python.org/pypi/paramiko"
REGEX_pn-python-paramiko = "/paramiko/${COMMON_REGEX}"
REGEX_URI_pn-python-passlib = "https://pypi.python.org/pypi/passlib"
REGEX_pn-python-passlib = "/passlib/${COMMON_REGEX}"
REGEX_URI_pn-python-paste = "https://pypi.python.org/pypi/Paste"
REGEX_pn-python-paste = "/Paste/${COMMON_REGEX}"
REGEX_URI_pn-python-pastedeploy = "https://pypi.python.org/pypi/PasteDeploy"
REGEX_pn-python-pastedeploy = "/PasteDeploy/${COMMON_REGEX}"
REGEX_URI_pn-python-pbr = "https://pypi.python.org/pypi/pbr"
REGEX_pn-python-pbr = "/pbr/${COMMON_REGEX}"
REGEX_URI_pn-python-pecan = "https://pypi.python.org/pypi/pecan"
REGEX_pn-python-pecan = "/pecan/${COMMON_REGEX}"
REGEX_URI_pn-python-pep8 = "https://pypi.python.org/pypi/pep8"
REGEX_pn-python-pep8 = "/pep8/${COMMON_REGEX}"
REGEX_URI_pn-python-pexpect = "https://pypi.python.org/pypi/pexpect"
REGEX_pn-python-pexpect = "/pexpect/${COMMON_REGEX}"
REGEX_URI_pn-python-pint = "https://pypi.python.org/pypi/Pint"
REGEX_pn-python-pint = "/Pint/${COMMON_REGEX}"
REGEX_URI_pn-python-ply = "https://pypi.python.org/pypi/ply"
REGEX_pn-python-ply = "/ply/${COMMON_REGEX}"
REGEX_URI_pn-python-posix-ipc = "https://pypi.python.org/pypi/posix_ipc"
REGEX_pn-python-posix-ipc = "/posix_ipc/${COMMON_REGEX}"
REGEX_URI_pn-python-prettytable = "https://pypi.python.org/pypi/prettytable"
REGEX_pn-python-prettytable = "/prettytable/${COMMON_REGEX}"
REGEX_URI_pn-python-psycopg2 = "https://pypi.python.org/pypi/psycopg2"
REGEX_pn-python-psycopg2 = "/psycopg2/${COMMON_REGEX}"
REGEX_URI_pn-python-py = "https://pypi.python.org/pypi/py"
REGEX_pn-python-py = "/py/${COMMON_REGEX}"
REGEX_URI_pn-python-pyasn1 = "https://pypi.python.org/pypi/pyasn1"
REGEX_pn-python-pyasn1 = "/pyasn1/${COMMON_REGEX}"
REGEX_URI_pn-python-pycadf = "https://pypi.python.org/pypi/pycadf"
REGEX_pn-python-pycadf = "/pycadf/${COMMON_REGEX}"
REGEX_URI_pn-python-pycrypto = "https://pypi.python.org/pypi/pycrypto"
REGEX_pn-python-pycrypto = "/pycrypto/${COMMON_REGEX}"
REGEX_URI_pn-python-pyflakes = "https://pypi.python.org/pypi/pyflakes"
REGEX_pn-python-pyflakes = "/pyflakes/${COMMON_REGEX}"
REGEX_URI_pn-python-pymongo = "https://pypi.python.org/pypi/pymongo"
REGEX_pn-python-pymongo = "/pymongo/${COMMON_REGEX}"
REGEX_URI_pn-python-pyparsing = "https://pypi.python.org/pypi/pyparsing"
REGEX_pn-python-pyparsing = "/pyparsing/${COMMON_REGEX}"
REGEX_URI_pn-python-pysaml2 = "https://pypi.python.org/pypi/pysaml2"
REGEX_pn-python-pysaml2 = "/pysaml2/${COMMON_REGEX}"
REGEX_URI_pn-python-pyscss = "https://pypi.python.org/pypi/pyScss"
REGEX_pn-python-pyscss = "/pyScss/${COMMON_REGEX}"
REGEX_URI_pn-python-pysnmp = "https://pypi.python.org/pypi/pysnmp"
REGEX_pn-python-pysnmp = "/pysnmp/${COMMON_REGEX}"
REGEX_URI_pn-python-pysqlite = "https://pypi.python.org/pypi/pysqlite"
REGEX_pn-python-pysqlite = "/pysqlite/${COMMON_REGEX}"
REGEX_URI_pn-python-pytest = "https://pypi.python.org/pypi/pytest"
REGEX_pn-python-pytest = "/pytest/${COMMON_REGEX}"
REGEX_URI_pn-python-pytz = "https://pypi.python.org/pypi/pytz"
REGEX_pn-python-pytz = "/pytz/${COMMON_REGEX}"
REGEX_URI_pn-python-pyudev = "https://pypi.python.org/pypi/pyudev"
REGEX_pn-python-pyudev = "/pyudev/${COMMON_REGEX}"
REGEX_URI_pn-python-retrying = "https://pypi.python.org/pypi/retrying"
REGEX_pn-python-retrying = "/retrying/${COMMON_REGEX}"
REGEX_URI_pn-python-rfc3986 = "https://pypi.python.org/pypi/rfc3986"
REGEX_pn-python-rfc3986 = "/rfc3986/${COMMON_REGEX}"
REGEX_URI_pn-python-routes = "https://pypi.python.org/pypi/Routes"
REGEX_pn-python-routes = "/Routes/${COMMON_REGEX}"
REGEX_URI_pn-python-rtslib-fb = "https://pypi.python.org/pypi/rtslib-fb"
REGEX_pn-python-rtslib-fb = "/rtslib-fb/${COMMON_REGEX}"
REGEX_URI_pn-python-setuptools-git = "https://pypi.python.org/pypi/setuptools-git"
REGEX_pn-python-setuptools-git = "/setuptools-git/${COMMON_REGEX}"
REGEX_URI_pn-python-simplegeneric = "https://pypi.python.org/pypi/simplegeneric"
REGEX_pn-python-simplegeneric = "/simplegeneric/${COMMON_REGEX}"
REGEX_URI_pn-python-singledispatch = "https://pypi.python.org/pypi/singledispatch"
REGEX_pn-python-singledispatch = "/singledispatch/${COMMON_REGEX}"
REGEX_URI_pn-python-sqlalchemy-migrate = "https://pypi.python.org/pypi/sqlalchemy-migrate"
REGEX_pn-python-sqlalchemy-migrate = "/sqlalchemy-migrate/${COMMON_REGEX}"
REGEX_URI_pn-python-stevedore = "https://pypi.python.org/pypi/stevedore"
REGEX_pn-python-stevedore = "/stevedore/${COMMON_REGEX}"
REGEX_URI_pn-python-subunit = "https://pypi.python.org/pypi/python-subunit"
REGEX_pn-python-subunit = "/python-subunit/${COMMON_REGEX}"
REGEX_URI_pn-python-sysv-ipc = "https://pypi.python.org/pypi/sysv_ipc"
REGEX_pn-python-sysv-ipc = "/sysv_ipc/${COMMON_REGEX}"
REGEX_URI_pn-python-tempita = "https://pypi.python.org/pypi/Tempita"
REGEX_pn-python-tempita = "/Tempita/(?P<pver>\d+\.\d+\.\d((\w)*)?)"
REGEX_URI_pn-python-termcolor = "https://pypi.python.org/pypi/termcolor"
REGEX_pn-python-termcolor = "/termcolor/${COMMON_REGEX}"
REGEX_URI_pn-python-testrepository = "https://pypi.python.org/pypi/testrepository"
REGEX_pn-python-testrepository = "/testrepository/${COMMON_REGEX}"
REGEX_URI_pn-python-testresources = "https://pypi.python.org/pypi/testresources"
REGEX_pn-python-testresources = "/testresources/${COMMON_REGEX}"
REGEX_URI_pn-python-testscenarios = "https://pypi.python.org/pypi/testscenarios"
REGEX_pn-python-testscenarios = "/testscenarios/${COMMON_REGEX}"
REGEX_URI_pn-python-testtools = "https://pypi.python.org/pypi/testtools"
REGEX_pn-python-testtools = "/testtools/${COMMON_REGEX}"
REGEX_URI_pn-python-thrift = "https://pypi.python.org/pypi/thrift"
REGEX_pn-python-thrift = "/thrift/${COMMON_REGEX}"
REGEX_URI_pn-python-tooz = "https://pypi.python.org/pypi/tooz"
REGEX_pn-python-tooz = "/tooz/${COMMON_REGEX}"
REGEX_URI_pn-python-tox = "https://pypi.python.org/pypi/tox"
REGEX_pn-python-tox = "/tox/${COMMON_REGEX}"
REGEX_URI_pn-python-virtualenv = "https://pypi.python.org/pypi/virtualenv"
REGEX_pn-python-virtualenv = "/virtualenv/${COMMON_REGEX}"
REGEX_URI_pn-python-waitress = "https://pypi.python.org/pypi/waitress"
REGEX_pn-python-waitress = "/waitress/${COMMON_REGEX}"
REGEX_URI_pn-python-warlock = "https://pypi.python.org/pypi/warlock"
REGEX_pn-python-warlock = "/warlock/${COMMON_REGEX}"
REGEX_URI_pn-python-websockify = "https://pypi.python.org/pypi/websockify"
REGEX_pn-python-websockify = "/websockify/${COMMON_REGEX}"
REGEX_URI_pn-python-webtest = "https://pypi.python.org/pypi/WebTest"
REGEX_pn-python-webtest = "/WebTest/${COMMON_REGEX}"
REGEX_URI_pn-python-wsgiref = "https://pypi.python.org/pypi/wsgiref"
REGEX_pn-python-wsgiref = "/wsgiref/${COMMON_REGEX}"
REGEX_URI_pn-python-wsme = "https://pypi.python.org/pypi/WSME"
REGEX_pn-python-wsme = "/WSME/${COMMON_REGEX}"
REGEX_URI_pn-python-xattr = "https://pypi.python.org/pypi/xattr"
REGEX_pn-python-xattr = "/xattr/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic = "https://pypi.python.org/pypi/XStatic"
REGEX_pn-python-xstatic = "/XStatic/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-angular = "https://pypi.python.org/pypi/XStatic-Angular"
REGEX_pn-python-xstatic-angular = "/XStatic-Angular/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-angular-bootstrap = "https://pypi.python.org/pypi/XStatic-Angular-Bootstrap"
REGEX_pn-python-xstatic-angular-bootstrap = "/XStatic-Angular-Bootstrap/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-angular-cookies = "https://pypi.python.org/pypi/XStatic-Angular-Cookies"
REGEX_pn-python-xstatic-angular-cookies = "/XStatic-Angular-Cookies/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-angular-mock = "https://pypi.python.org/pypi/XStatic-Angular-Mock"
REGEX_pn-python-xstatic-angular-mock = "/XStatic-Angular-Mock/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-bootstrap-datepicker = "https://pypi.python.org/pypi/XStatic-Bootstrap-Datepicker"
REGEX_pn-python-xstatic-bootstrap-datepicker = "/XStatic-Bootstrap-Datepicker/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-bootstrap-scss = "https://pypi.python.org/pypi/XStatic-Bootstrap-SCSS"
REGEX_pn-python-xstatic-bootstrap-scss = "/XStatic-Bootstrap-SCSS/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-d3 = "https://pypi.python.org/pypi/XStatic-D3"
REGEX_pn-python-xstatic-d3 = "/XStatic-D3/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-font-awesome = "https://pypi.python.org/pypi/XStatic-Font-Awesome"
REGEX_pn-python-xstatic-font-awesome = "/XStatic-Font-Awesome/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-hogan = "https://pypi.python.org/pypi/XStatic-Hogan"
REGEX_pn-python-xstatic-hogan = "/XStatic-Hogan/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jasmine = "https://pypi.python.org/pypi/XStatic-Jasmine"
REGEX_pn-python-xstatic-jasmine = "/XStatic-Jasmine/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jquery = "https://pypi.python.org/pypi/XStatic-jQuery"
REGEX_pn-python-xstatic-jquery = "/XStatic-jQuery/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jquery-migrate = "https://pypi.python.org/pypi/XStatic-JQuery-Migrate"
REGEX_pn-python-xstatic-jquery-migrate = "/XStatic-JQuery-Migrate/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jquery-quicksearch = "https://pypi.python.org/pypi/XStatic-JQuery.quicksearch"
REGEX_pn-python-xstatic-jquery-quicksearch = "/XStatic-JQuery.quicksearch/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jquery-tablesorter = "https://pypi.python.org/pypi/XStatic-JQuery.TableSorter"
REGEX_pn-python-xstatic-jquery-tablesorter = "/XStatic-JQuery.TableSorter/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jquery-ui = "https://pypi.python.org/pypi/XStatic-jquery-ui"
REGEX_pn-python-xstatic-jquery-ui = "/XStatic-jquery-ui/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-jsencrypt = "https://pypi.python.org/pypi/XStatic-JSEncrypt"
REGEX_pn-python-xstatic-jsencrypt = "/XStatic-JSEncrypt/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-qunit = "https://pypi.python.org/pypi/XStatic-QUnit"
REGEX_pn-python-xstatic-qunit = "/XStatic-QUnit/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-rickshaw = "https://pypi.python.org/pypi/XStatic-Rickshaw"
REGEX_pn-python-xstatic-rickshaw = "/XStatic-Rickshaw/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-smart-table = "https://pypi.python.org/pypi/XStatic-smart-table"
REGEX_pn-python-xstatic-smart-table = "/XStatic-smart-table/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-spin = "https://pypi.python.org/pypi/XStatic-Spin"
REGEX_pn-python-xstatic-spin = "/XStatic-Spin/${COMMON_REGEX}"
REGEX_URI_pn-python-xstatic-term.js = "https://pypi.python.org/pypi/XStatic-term.js"
REGEX_pn-python-xstatic-term.js = "/XStatic-term.js/${COMMON_REGEX}"
REGEX_URI_pn-python-zake = "https://pypi.python.org/pypi/zake"
REGEX_pn-python-zake = "/zake/${COMMON_REGEX}"

# GIT
GITTAGREGEX_COMMON = "(?P<pver>\d+\.\d+\.(\d\.?)*)"

GITTAGREGEX_pn-python-glanceclient = "${GITTAGREGEX_COMMON}"
GITTAGREGEX_pn-python-keystoneclient = "${GITTAGREGEX_COMMON}"
GITTAGREGEX_pn-python-neutronclient = "(?P<pver>\d+\.\d+\.(\d\.?)+)"
GITTAGREGEX_pn-python-novaclient = "${GITTAGREGEX_COMMON}"

GITTAGREGEX_BETA = "(?P<pver>\d+\.\d+(\.\d+(b\d)?)?)"
GITTAGREGEX_pn-python-barbican = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-ceilometer = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-cinder = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-glance = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-heat = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-horizon = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-keystone = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-neutron = "${GITTAGREGEX_BETA}"
GITTAGREGEX_pn-python-nova = "${GITTAGREGEX_BETA}"
