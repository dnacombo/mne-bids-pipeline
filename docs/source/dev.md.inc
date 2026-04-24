## v1.11.0 (unreleased)

### :new: New features & enhancements

- Improved performance by caching BIDSPath matches for Maxwell Filter calibration and cross-talk files (#1215 by @larsoner).
- Improved performance and logging when skipping cached steps (#1216 by @larsoner).
- Corrected import order: remove channels before setting template montage as stated in [`eeg_template_montage`][mne_bids_pipeline._config.eeg_template_montage] (#1220 by @dnacombo)

[//]: # (- Whatever [`mf_filter_chpi`][mne_bids_pipeline._config.mf_filter_chpi] etc (#000 by @whoever))

[//]: # (### :warning: Behavior changes)

[//]: # (### :package: Requirements)

[//]: # (### :bug: Bug fixes)

[//]: # (### :books: Documentation)

[//]: # (### :medical_symbol: Code health and infrastructure)
