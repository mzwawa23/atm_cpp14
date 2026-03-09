---
name: static-code-analysis
description: Guide for running ststic code analysis and fixing violations. Use this when asked analyze results and fix violations.
---

# Run ststic code analysis

This skill helps you run static code analysis, fix violations (finding) and create suppressions

## When to use this skill

Use this skill when you need to:
- Run static code analysis for this project
- Fix static code analysis findings/violations

## Fixing static code analysis findings
 - first check if report.xml file exist in 'reports' folder
 - if the report.xml file doesn't exist, run static code analysis
 - look for violations in report.xml file and try to fix the pointed findings/violatoins

## Running tests

To run tests locally:
```bash
npx playwright test
```

To debug tests:
```bash
npx playwright test --debug
```

## Best practices

- Use data-testid attributes for dynamic content
- Keep tests independent and atomic
- Use Page Object Model for complex pages
- Take screenshots on failure
