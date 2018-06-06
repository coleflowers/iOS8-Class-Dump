/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:34:19 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <VoiceMemos/RCRecordingCellDelegate.h>
#import <VoiceMemos/RCPreviewControllerObserver.h>
#import <VoiceMemos/RCCaptureSessionObserver.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol RCRecordingsTableViewDelegate;
@class NSIndexPath, RCSavedRecording, RCRecordingCell, RCCompositionController, NSString;

@interface RCRecordingsTableViewController : UITableViewController <RCRecordingCellDelegate, RCPreviewControllerObserver, RCCaptureSessionObserver, UIActionSheetDelegate, UIGestureRecognizerDelegate> {

	NSIndexPath* _lastSelectedIndexPath;
	RCSavedRecording* _recordingBeingDeleted;
	RCSavedRecording* _recordingBeingDeselected;
	RCRecordingCell* _cellBecomingFirstResponder;
	BOOL _playbackControlsHidden;
	BOOL _drawsDisabled;
	BOOL _selectionEnabled;
	BOOL _editingEnabled;
	BOOL _showsSelection;
	BOOL _showsExpandedContentWhenSelected;
	RCSavedRecording* _selectedRecording;
	id<RCRecordingsTableViewDelegate> _delegate;
	RCCompositionController* _selectedRecordingCompositionController;

}

@property (assign,nonatomic,__weak) id<RCRecordingsTableViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsHidden; 
@property (assign,getter=isSelectionEnabled,nonatomic) BOOL selectionEnabled;                               //@synthesize selectionEnabled=_selectionEnabled - In the implementation block
@property (assign,getter=isEditingEnabled,nonatomic) BOOL editingEnabled;                                   //@synthesize editingEnabled=_editingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsSelection;                                                           //@synthesize showsSelection=_showsSelection - In the implementation block
@property (assign,nonatomic) BOOL showsExpandedContentWhenSelected;                                         //@synthesize showsExpandedContentWhenSelected=_showsExpandedContentWhenSelected - In the implementation block
@property (nonatomic,retain) RCSavedRecording * selectedRecording;                                          //@synthesize selectedRecording=_selectedRecording - In the implementation block
@property (nonatomic,retain) RCCompositionController * selectedRecordingCompositionController;              //@synthesize selectedRecordingCompositionController=_selectedRecordingCompositionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsExpandedContentWhenSelected:(BOOL)arg1 ;
-(RCCompositionController *)selectedRecordingCompositionController;
-(void)setSelectedRecordingCompositionController:(RCCompositionController *)arg1 ;
-(void)setSelectedRecording:(id)arg1 compositionController:(id)arg2 ;
-(void)setSelectedRecording:(RCSavedRecording *)arg1 ;
-(void)_RCCaptureInputDeviceCaptureSessionDidChangeNotification:(id)arg1 ;
-(void)_RCSavedRecordingsModelDidChangeNotification:(id)arg1 ;
-(void)_NSCurrentLocaleDidChangeNotification:(id)arg1 ;
-(void)_exportingCompositionURLsDidChangeNotification:(id)arg1 ;
-(void)_insertTapGestureRecognizer;
-(id)_selectedRecordingCell;
-(BOOL)_currentStateShouldDisabledCell:(id)arg1 ;
-(void)setShowingDisabled:(BOOL)arg1 ;
-(void)_updateVisibleCellSeparatorInsets;
-(id)_indexPathForSelectedRecording;
-(void)_setSelectedRecording:(id)arg1 compositionController:(id)arg2 notifyDelegate:(BOOL)arg3 changePreview:(BOOL)arg4 ;
-(id)_currentStateTableViewBackground;
-(void)setPlaybackControlsHidden:(BOOL)arg1 ;
-(void)_updateNavigationBarEditButtonItem;
-(id)_unusableCellsIndexPaths;
-(id)_indexPathOfNoContentRow;
-(id)_indexPathOfAdditionalBlankRow;
-(id)_recordingAtIndexPath:(id)arg1 ;
-(BOOL)_currentStateShouldDisabledCellWithRecording:(id)arg1 ;
-(id)_visibleCellForRecording:(id)arg1 ;
-(id)_compositionControllerForRecording:(id)arg1 ;
-(id)_selectedRecording;
-(void)_tableTapGestureRecognized:(id)arg1 ;
-(void)_reloadSavedRecordingModelObjects;
-(BOOL)_separatorInsetDrawsEndToEndForCellAtIndexPath:(id)arg1 ;
-(void)playbackCell:(id)arg1 didRequestPreviewState:(long long)arg2 ;
-(void)playbackCell:(id)arg1 didScrubToTime:(double)arg2 ;
-(void)playbackCellShareButtonTapped:(id)arg1 ;
-(void)playbackCellEditButtonTapped:(id)arg1 ;
-(void)playbackCellDeleteButtonTapped:(id)arg1 ;
-(BOOL)playbackCell:(id)arg1 shouldBeginEditingTitleField:(id)arg2 ;
-(id)playbackCell:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3 ;
-(RCSavedRecording *)selectedRecording;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(void)clearSelectedRecordings;
-(BOOL)playbackControlsHidden;
-(BOOL)isSelectionEnabled;
-(BOOL)showsExpandedContentWhenSelected;
-(void)setShowsSelection:(BOOL)arg1 ;
-(BOOL)showsSelection;
-(void)dealloc;
-(void)setDelegate:(id<RCRecordingsTableViewDelegate>)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<RCRecordingsTableViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 ;
-(void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2 ;
-(void)captureSession:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)previewControllerDidChangePreparingState:(id)arg1 ;
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2 ;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2 ;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 ;
-(void)rc_runAutomatedDebuggingTestsWithCompletion:(/*^block*/id)arg1 ;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2 ;
-(void)setEditingEnabled:(BOOL)arg1 ;
-(BOOL)isEditingEnabled;
@end
