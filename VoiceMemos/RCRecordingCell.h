/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:34:19 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCViewLayoutTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RCRecordingCellDelegate;
@class RCSavedRecording, RCAVState, RCRecordingCellLabelsViewLayout, RCRecordingCellActionsViewLayout, UITapGestureRecognizer, NSString;

@interface RCRecordingCell : RCViewLayoutTableViewCell <UITextFieldDelegate> {

	BOOL _wantsToResumePlayback;
	BOOL _recordingIsAvailable;
	BOOL _showingDisabled;
	BOOL _showingPreparingToPlayIndicator;
	BOOL _showingPreparingToShareIndicator;
	BOOL _showingSaveInProgressIndicator;
	BOOL _actionControlsVisible;
	BOOL _editingEnabled;
	BOOL _isSavedRecordingCell;
	BOOL _isBlankContentCell;
	BOOL _isNoContentCell;
	id<RCRecordingCellDelegate> _delegate;
	RCSavedRecording* _recording;
	double _duration;
	double _currentTime;
	RCAVState* _AVState;
	RCRecordingCellLabelsViewLayout* _labelsLayout;
	RCRecordingCellActionsViewLayout* _actionsLayout;
	UITapGestureRecognizer* _editTitleTapGesture;

}

@property (assign,nonatomic,__weak) id<RCRecordingCellDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * recording;                                                               //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) double duration;                                                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) RCAVState * AVState;                                                                          //@synthesize AVState=_AVState - In the implementation block
@property (assign,getter=isShowingDisabled,nonatomic) BOOL showingDisabled;                                                //@synthesize showingDisabled=_showingDisabled - In the implementation block
@property (assign,getter=isShowingPreparingToPlayIndicator,nonatomic) BOOL showingPreparingToPlayIndicator;                //@synthesize showingPreparingToPlayIndicator=_showingPreparingToPlayIndicator - In the implementation block
@property (assign,getter=isShowingPreparingToShareIndicator,nonatomic) BOOL showingPreparingToShareIndicator;              //@synthesize showingPreparingToShareIndicator=_showingPreparingToShareIndicator - In the implementation block
@property (assign,getter=isShowingSaveInProgressIndicator,nonatomic) BOOL showingSaveInProgressIndicator;                  //@synthesize showingSaveInProgressIndicator=_showingSaveInProgressIndicator - In the implementation block
@property (nonatomic,readonly) BOOL actionControlsVisible;                                                                 //@synthesize actionControlsVisible=_actionControlsVisible - In the implementation block
@property (assign,getter=isEditingEnabled,nonatomic) BOOL editingEnabled;                                                  //@synthesize editingEnabled=_editingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isSavedRecordingCell;                                                                  //@synthesize isSavedRecordingCell=_isSavedRecordingCell - In the implementation block
@property (nonatomic,readonly) BOOL isBlankContentCell;                                                                    //@synthesize isBlankContentCell=_isBlankContentCell - In the implementation block
@property (nonatomic,readonly) BOOL isNoContentCell;                                                                       //@synthesize isNoContentCell=_isNoContentCell - In the implementation block
@property (nonatomic,readonly) RCRecordingCellLabelsViewLayout * labelsLayout;                                             //@synthesize labelsLayout=_labelsLayout - In the implementation block
@property (nonatomic,readonly) RCRecordingCellActionsViewLayout * actionsLayout;                                           //@synthesize actionsLayout=_actionsLayout - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * editTitleTapGesture;                                               //@synthesize editTitleTapGesture=_editTitleTapGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)disabledBackgroundColor;
-(void)setShowingDisabled:(BOOL)arg1 ;
-(void)setActionControlsVisible:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)commitEditedChanges;
-(void)prepareForDisplayAsNoContentCell;
-(void)prepareForDisplayAsBlankCell;
-(void)prepareForDisplayAsSavedRecording:(id)arg1 ;
-(void)setShowingSaveInProgressIndicator:(BOOL)arg1 ;
-(BOOL)actionControlsVisible;
-(void)setShowingPreparingToPlayIndicator:(BOOL)arg1 ;
-(void)setShowingPreparingToShareIndicator:(BOOL)arg1 ;
-(void)beginEditingTitleTextField;
-(BOOL)isShowingDisabled;
-(void)prepareForEstimatingRowHeight;
-(void)_editTitleTapGestureAction:(id)arg1 ;
-(void)prepareForReuseWithSetupBlock:(/*^block*/id)arg1 ;
-(void)_setPlaybackControlsVisible:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateTitleEditingState;
-(long long)_currentPreviewButtonState;
-(BOOL)_textFieldShouldBeginEditingIgnoringDelegate;
-(BOOL)isNoContentCell;
-(BOOL)isSavedRecordingCell;
-(void)handleTogglePlayPauseAction;
-(void)handleEditAction;
-(void)handleDeleteAction;
-(void)handleShareAction;
-(long long)rc_tableViewScrollPositionForScrollPosition:(long long)arg1 ;
-(BOOL)isShowingPreparingToPlayIndicator;
-(BOOL)isShowingPreparingToShareIndicator;
-(BOOL)isShowingSaveInProgressIndicator;
-(BOOL)isBlankContentCell;
-(RCRecordingCellLabelsViewLayout *)labelsLayout;
-(RCRecordingCellActionsViewLayout *)actionsLayout;
-(UITapGestureRecognizer *)editTitleTapGesture;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)_updateLabels;
-(void)setCurrentTime:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<RCRecordingCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)description;
-(id<RCRecordingCellDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_updateTextColors;
-(id)editableTextField;
-(RCSavedRecording *)recording;
-(RCAVState *)AVState;
-(void)setAVState:(RCAVState *)arg1 ;
-(void)setEditingEnabled:(BOOL)arg1 ;
-(BOOL)isEditingEnabled;
-(double)currentTime;
@end

