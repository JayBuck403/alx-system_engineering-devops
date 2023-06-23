# Creates a file 'school' in /tmp

$doc_root = '/tmp/school'

file {$doc_root:
  ensure  => 'file',
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-date',
  content => 'I love Puppet',
}
