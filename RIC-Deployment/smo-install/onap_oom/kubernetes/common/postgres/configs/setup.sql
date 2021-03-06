--- System Setup
SET application_name="container_setup";

CREATE EXTENSION IF NOT EXISTS pg_stat_statements;
CREATE EXTENSION IF NOT EXISTS pgaudit;

ALTER USER postgres PASSWORD '${PG_ROOT_PASSWORD}';

CREATE USER ${PG_PRIMARY_USER} WITH REPLICATION;
ALTER USER ${PG_PRIMARY_USER} PASSWORD '${PG_PRIMARY_PASSWORD}';

CREATE USER "${PG_USER}" LOGIN;
ALTER USER "${PG_USER}" PASSWORD '${PG_PASSWORD}';

CREATE DATABASE ${PG_DATABASE};
GRANT ALL PRIVILEGES ON DATABASE ${PG_DATABASE} TO "${PG_USER}";

CREATE TABLE IF NOT EXISTS primarytable (key varchar(20), value varchar(20));
GRANT ALL ON primarytable TO ${PG_PRIMARY_USER};

--- PG_DATABASE Setup

\c ${PG_DATABASE}

CREATE EXTENSION IF NOT EXISTS pg_stat_statements;
CREATE EXTENSION IF NOT EXISTS pgaudit;

--- Verify permissions via PG_USER

\c ${PG_DATABASE} "${PG_USER}";

CREATE SCHEMA IF NOT EXISTS "${PG_USER}";

CREATE TABLE IF NOT EXISTS "${PG_USER}".testtable (
    name varchar(30) PRIMARY KEY,
    value varchar(50) NOT NULL,
    updatedt timestamp NOT NULL
);

INSERT INTO "${PG_USER}".testtable (name, value, updatedt) VALUES ('CPU', '256', now());
