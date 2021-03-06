/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NavigationBar, NSString, FluidProgressView;

@interface NavigationBarItem : NSObject {

	NavigationBar* _navigationBar;
	BOOL _showsLockIcon;
	BOOL _showsSearchIndicator;
	BOOL _showsStopReloadButtons;
	BOOL _stopReloadButtonShowsStop;
	BOOL _textHasEVCertificateTint;
	BOOL _lockIconHasEVCertificateTint;
	BOOL _readerButtonSelected;
	BOOL _showsReaderButton;
	BOOL _overrideBarStyleForSecurityWarning;
	NSString* _text;
	NSString* _textWhenExpanded;
	unsigned long long _startIndexOfTextInExpandedText;
	NSString* _customPlaceholderText;
	FluidProgressView* _progressView;
	id _target;
	SEL _reloadAction;
	SEL _stopAction;

}

@property (nonatomic,readonly) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * textWhenExpanded;                                    //@synthesize textWhenExpanded=_textWhenExpanded - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndexOfTextInExpandedText;              //@synthesize startIndexOfTextInExpandedText=_startIndexOfTextInExpandedText - In the implementation block
@property (nonatomic,copy) NSString * customPlaceholderText;                                   //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL showsLockIcon;                                               //@synthesize showsLockIcon=_showsLockIcon - In the implementation block
@property (assign,nonatomic) BOOL showsSearchIndicator;                                        //@synthesize showsSearchIndicator=_showsSearchIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsStopReloadButtons;                                      //@synthesize showsStopReloadButtons=_showsStopReloadButtons - In the implementation block
@property (assign,nonatomic) BOOL stopReloadButtonShowsStop;                                   //@synthesize stopReloadButtonShowsStop=_stopReloadButtonShowsStop - In the implementation block
@property (assign,nonatomic) BOOL textHasEVCertificateTint;                                    //@synthesize textHasEVCertificateTint=_textHasEVCertificateTint - In the implementation block
@property (assign,nonatomic) BOOL lockIconHasEVCertificateTint;                                //@synthesize lockIconHasEVCertificateTint=_lockIconHasEVCertificateTint - In the implementation block
@property (assign,nonatomic) BOOL readerButtonSelected;                                        //@synthesize readerButtonSelected=_readerButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL showsReaderButton;                                           //@synthesize showsReaderButton=_showsReaderButton - In the implementation block
@property (assign,nonatomic) BOOL overrideBarStyleForSecurityWarning;                          //@synthesize overrideBarStyleForSecurityWarning=_overrideBarStyleForSecurityWarning - In the implementation block
@property (nonatomic,retain) FluidProgressView * progressView;                                 //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                 //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL reloadAction;                                                 //@synthesize reloadAction=_reloadAction - In the implementation block
@property (assign,nonatomic) SEL stopAction;                                                   //@synthesize stopAction=_stopAction - In the implementation block
-(void)setShowsStopReloadButtons:(BOOL)arg1 ;
-(NSString *)textWhenExpanded;
-(BOOL)overrideBarStyleForSecurityWarning;
-(void)setShowsReaderButton:(BOOL)arg1 ;
-(void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(void)setShowsLockIcon:(BOOL)arg1 ;
-(void)setShowsSearchIndicator:(BOOL)arg1 ;
-(void)setStopReloadButtonShowsStop:(BOOL)arg1 ;
-(void)setReaderButtonSelected:(BOOL)arg1 ;
-(void)setOverrideBarStyleForSecurityWarning:(BOOL)arg1 ;
-(void)setTextHasEVCertificateTint:(BOOL)arg1 ;
-(void)setLockIconHasEVCertificateTint:(BOOL)arg1 ;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(unsigned long long)startIndexOfTextInExpandedText;
-(NSString *)customPlaceholderText;
-(BOOL)showsLockIcon;
-(BOOL)showsSearchIndicator;
-(BOOL)showsStopReloadButtons;
-(BOOL)stopReloadButtonShowsStop;
-(BOOL)textHasEVCertificateTint;
-(BOOL)lockIconHasEVCertificateTint;
-(BOOL)readerButtonSelected;
-(BOOL)showsReaderButton;
-(SEL)reloadAction;
-(void)setReloadAction:(SEL)arg1 ;
-(SEL)stopAction;
-(void)setStopAction:(SEL)arg1 ;
-(id)init;
-(void)setTarget:(id)arg1 ;
-(NSString *)text;
-(id)target;
-(void)setProgressView:(FluidProgressView *)arg1 ;
-(FluidProgressView *)progressView;
-(void)_setNavigationBar:(id)arg1 ;
@end

