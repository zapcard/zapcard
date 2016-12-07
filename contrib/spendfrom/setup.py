from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for zapcard "coin control"',
      author='Gavin Andresen',
      author_email='gavin@zapcardfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
