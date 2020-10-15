**[2020-01-01 DEPRECATED - This project no longer works as Formula 1 has changed the live timing parts]**

# live-f1
live-f1 is a native Linux client for viewing the official Formula-1 "Live Timing" stream.

[![Build Status](https://travis-ci.org/kaderud/live-f1.svg?branch=master)](https://travis-ci.org/kaderud/live-f1)

The official Formula-1 website includes a Java client which during
races, qualifying and practice sessions displays the live timing
information from the track side.

This client was written to show the same feed without the need of a
Java-enabled web browser.

An account on formula1.com is still required.


Dependencies
------------

live-f1 uses the standard curses library to display its output on an
ordinary terminal, it uses the libneon library for the HTTP parts of
the protocol.

To compile live-f1 you'll need the development versions of both
installed, the Ubuntu/Debian package names are given below.

	* ncurses 5.5 or later (libncurses5-dev)
	* libneon 0.24 or later (libneon25-dev or libneon24-dev)

For detailed compilation and installation instructions see the INSTALL
file, if you've checked live-f1 out from revision control or want to
hack on live-f1, see the HACKING file.


Usage
-----

The first time you run live-f1 it will ask you for the e-mail address
and password you registered at the Formula-1 website.  If you've not
already done so, you'll need to register by filling in the form at:

	http://www.formula1.com/req/registration

Your registration details are stored in the .f1rc file in your home
directory, should you need to change them later.

live-f1 will display the current timing board, which is usually that
of the previous session.  When a new session starts, the board is
automatically cleared and updated for the new session.

To exit live-f1 press ENTER.

Friday practice sessions often have up to 30 cars running, so if you
wish to view the timing information for those you will need to ensure
that the terminal has at least that number of lines available.
