from setuptools import find_packages
from setuptools import setup

setup(
    name='create_message_types',
    version='0.0.0',
    packages=find_packages(
        include=('create_message_types', 'create_message_types.*')),
)
