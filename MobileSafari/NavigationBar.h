/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:09 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/_UIBasicAnimationFactory.h>
#import <MobileSafari/FluidProgressViewDelegate.h>

@protocol NavigationBarDelegate;
@class UIButton, UIView, NavigationBarLabelsContainer, UILabel, UIImageView, CrossfadingImageView, NavigationBarURLButton, FluidProgressView, NavigationBarBackdrop, NSAttributedString, NavigationBarReaderButton, DimmingButton, NSTimer, NavigationBarItem, BrowserToolbar, _UIBackdropViewSettings, UnifiedField, NSString;

@interface NavigationBar : UIView <_UIBasicAnimationFactory, FluidProgressViewDelegate> {

	UIButton* _compressedBarButton;
	UIView* _controlsContainer;
	NavigationBarLabelsContainer* _labelsContainer;
	UIView* _labelScalingContainer;
	UILabel* _URLLabel;
	UILabel* _expandedURLLabel;
	UILabel* _readerAvailabilityLabel;
	double _URLWidth;
	double _URLHeight;
	double _expandedURLWidth;
	double _expandedURLHeight;
	double _offsetOfURLInExpandedURL;
	UIView* _URLContainer;
	UIImageView* _URLFadeOut;
	UIView* _fakeTextFieldSelectionView;
	double _fakeSelectionStartOffset;
	double _fakeSelectionEndOffset;
	UIButton* _fakeClearButton;
	CrossfadingImageView* _searchIndicator;
	CrossfadingImageView* _lockView;
	CrossfadingImageView* _activeURLLabelAccessory;
	double _activeURLLabelAccessorySpacing;
	double _activeURLLabelAccessorySquishedSpacing;
	double _activeURLLabelAccessoryVerticalOffset;
	NavigationBarURLButton* _URLOutline;
	FluidProgressView* _progressView;
	NavigationBarBackdrop* _backdrop;
	UIView* _separator;
	BOOL _lockViewNeedsUpdate;
	NSAttributedString* _attributedTextWhenExpanded;
	NavigationBarReaderButton* _readerButton;
	DimmingButton* _stopButton;
	DimmingButton* _reloadButton;
	UIButton* _cancelButton;
	double _cancelButtonIntrinsicWidth;
	BOOL _readerButtonWillShow;
	NSTimer* _readerAvailabilityLabelHideTimer;
	BOOL _usesNarrowLayout;
	BOOL _unifiedFieldShowsProgressView;
	BOOL _usingLightControls;
	BOOL _controlsHidden;
	BOOL _expanded;
	BOOL _usesUnscaledBackdrop;
	BOOL _backdropGroupDisabled;
	BOOL _suppressesBlur;
	NavigationBarItem* _item;
	unsigned long long _tintStyle;
	BrowserToolbar* _toolbar;
	_UIBackdropViewSettings* _customBackdropSettings;
	UnifiedField* _textField;
	id<NavigationBarDelegate> _delegate;
	double _contentUnderStatusBarHeight;
	double _maximumHeight;
	double _minimumBackdropHeight;
	UIView* _inputAccessoryView;

}

@property (nonatomic,retain) NavigationBarItem * item;                                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                                                  //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (assign,nonatomic) BOOL unifiedFieldShowsProgressView;                                     //@synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView - In the implementation block
@property (assign,nonatomic) unsigned long long tintStyle;                                           //@synthesize tintStyle=_tintStyle - In the implementation block
@property (assign,getter=isUsingLightControls,nonatomic) BOOL usingLightControls;                    //@synthesize usingLightControls=_usingLightControls - In the implementation block
@property (assign,nonatomic) BOOL hasToolbar; 
@property (nonatomic,readonly) BrowserToolbar * toolbar;                                             //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,getter=areControlsHidden,nonatomic) BOOL controlsHidden;                           //@synthesize controlsHidden=_controlsHidden - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * customBackdropSettings;                       //@synthesize customBackdropSettings=_customBackdropSettings - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UnifiedField * textField;                                             //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) CGRect URLOutlineFrameInNavigationBarSpace; 
@property (assign,nonatomic) BOOL updatesBackdrop; 
@property (assign,nonatomic) BOOL usesUnscaledBackdrop;                                              //@synthesize usesUnscaledBackdrop=_usesUnscaledBackdrop - In the implementation block
@property (assign,getter=isBackdropGroupDisabled,nonatomic) BOOL backdropGroupDisabled;              //@synthesize backdropGroupDisabled=_backdropGroupDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationBarDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double contentUnderStatusBarHeight;                                     //@synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight - In the implementation block
@property (assign,nonatomic) BOOL suppressesBlur;                                                    //@synthesize suppressesBlur=_suppressesBlur - In the implementation block
@property (nonatomic,readonly) double visualHeight; 
@property (assign,nonatomic) double maximumHeight;                                                   //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) double minimumBackdropHeight;                                           //@synthesize minimumBackdropHeight=_minimumBackdropHeight - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                            //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minimumHeight;
+(double)separatorHeight;
+(double)defaultHeight;
-(BOOL)isUsingLightControls;
-(void)setSuppressesBlur:(BOOL)arg1 ;
-(void)setContentUnderStatusBarHeight:(double)arg1 ;
-(void)squishExternalView:(id)arg1 withUntransformedFrame:(CGRect)arg2 minimumScale:(double)arg3 ;
-(void)setHasToolbar:(BOOL)arg1 ;
-(void)setUnifiedFieldShowsProgressView:(BOOL)arg1 ;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(void)setUpdatesBackdrop:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(BOOL)hasToolbar;
-(double)visualHeight;
-(void)setUsesUnscaledBackdrop:(BOOL)arg1 ;
-(void)setBackdropGroupDisabled:(BOOL)arg1 ;
-(void)setMinimumBackdropHeight:(double)arg1 ;
-(void)setControlsHidden:(BOOL)arg1 ;
-(void)setCustomBackdropSettings:(_UIBackdropViewSettings *)arg1 ;
-(BOOL)usesNarrowLayout;
-(void)clearEphemeralUI;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)fluidProgressViewWillShowProgress:(id)arg1 ;
-(void)_updateShowsLockIcon;
-(void)_updateShowsSearchIndicator;
-(void)_updateStopReloadButtonVisibility;
-(void)_updateStopReloadButtonShowsStop;
-(void)_updateReaderButtonSelected;
-(void)_updateBackdropStyle;
-(void)_updateTextColor;
-(void)_updateLockIconHasEVCertificateTint;
-(void)_updateReaderButtonVisibility;
-(void)_updatePlaceholderText;
-(void)backdropDidApplySettings:(id)arg1 ;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_updateToolbarAlpha;
-(id)_editingLabelFont;
-(double)_editingScaleFactor;
-(id)_viewToInsertProgressBarIn;
-(id)_backdropInputSettings;
-(void)_URLTapped:(id)arg1 ;
-(void)_updateURLOutlineColor;
-(void)_updateTextMetrics;
-(id)_fadeOutImageWithSize:(CGSize)arg1 opaquePoint:(CGPoint)arg2 transparentPoint:(CGPoint)arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5 ;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_updateReaderButtonTint;
-(void)_reloadButtonPressed;
-(id)_dimmingButtonWithAction:(SEL)arg1 ;
-(void)_stopButtonPressed;
-(void)_configureStopReloadButtonTintedImages;
-(void)_compressedBarTapped;
-(double)_squishTransformFactor;
-(double)_controlsAlpha;
-(void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateSeparatorAlpha;
-(void)_updateBackdropFrame;
-(void)_updateLockViewIfNeeded;
-(double)_URLFieldHorizontalMargin;
-(double)_customButtonHorizontalPadding;
-(void)_updateTextFieldFrame;
-(double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4 ;
-(double)_textFieldTopMargin;
-(void)_updateFakeViews;
-(void)_hideReaderAvailabilityLabelAnimated:(BOOL)arg1 ;
-(id)_expandedURLLabelParagraphStyle;
-(void)_updateSearchIndicator;
-(id)_lockImageUsingMiniatureVersion:(BOOL)arg1 ;
-(void)_updateActiveURLLabelAccessory;
-(void)_hideReaderAvailabilityLabelNow;
-(void)_hideReaderAvailabilityLabelSoon;
-(id)_EVCertLockAndTextColor;
-(id)_untintedLockImageUsingMiniatureVersion:(BOOL)arg1 ;
-(id)_lockImageWithTint:(id)arg1 usingMiniatureVersion:(BOOL)arg2 ;
-(BOOL)updatesBackdrop;
-(id)_newNavigationButtonWithImage:(id)arg1 insets:(UIEdgeInsets)arg2 action:(SEL)arg3 ;
-(CGRect)URLOutlineFrameInNavigationBarSpace;
-(BOOL)unifiedFieldShowsProgressView;
-(void)setUsingLightControls:(BOOL)arg1 ;
-(BOOL)areControlsHidden;
-(_UIBackdropViewSettings *)customBackdropSettings;
-(BOOL)usesUnscaledBackdrop;
-(BOOL)isBackdropGroupDisabled;
-(double)contentUnderStatusBarHeight;
-(BOOL)suppressesBlur;
-(double)minimumBackdropHeight;
-(void)setMaximumHeight:(double)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NavigationBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<NavigationBarDelegate>)delegate;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BOOL)canBecomeFirstResponder;
-(NavigationBarItem *)item;
-(void)setItem:(NavigationBarItem *)arg1 ;
-(BrowserToolbar *)toolbar;
-(BOOL)isExpanded;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(id)_placeholderColor;
-(void)setExpanded:(BOOL)arg1 ;
-(UnifiedField *)textField;
-(void)_updateText;
-(double)maximumHeight;
-(id)_placeholderText;
-(void)_updateProgressView;
-(void)_updateControlTints;
-(unsigned long long)tintStyle;
-(void)setTintStyle:(unsigned long long)arg1 ;
@end

