#!/usr/bin/env python

# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this file,
# You can obtain one at http://mozilla.org/MPL/2.0/.

import os
import publish_release
import sys
import unittest

from githubmock import Repo


dirname = os.path.dirname(os.path.realpath(__file__))
sys.path.append(os.path.join(dirname, '..'))


class TestPublishGetDraft(unittest.TestCase):
    def setUp(self):
        self.repo = Repo()

    @unittest.skip("TODO: mbacchi fix test")
    def test_fails_on_existing_release(self):
        self.repo.releases._releases = [{'tag_name': 'test', 'draft': False}]
        self.assertRaises(UserWarning, publish_release.get_draft, self.repo,
                          'test')

    @unittest.skip("TODO: mbacchi fix test")
    def test_fails_on_no_draft(self):
        self.repo.releases._releases = [{'tag_name': 'old', 'draft': False}]
        self.assertRaises(UserWarning, publish_release.get_draft, self.repo,
                          'new')

    @unittest.skip("TODO: mbacchi fix test")
    def test_succeeds_on_existing_draft(self):
        self.repo.releases._releases = [{'tag_name': 'test', 'draft': True}]
        publish_release.get_draft(self.repo, 'test')


if __name__ == '__main__':
    print unittest.main()
