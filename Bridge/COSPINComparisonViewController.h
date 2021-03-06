/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIActivityIndicatorView, UIToolbar, UIBarButtonItem, NRDevice, NSNumber, UIAlertView;

@interface COSPINComparisonViewController : UIViewController {

	UILabel* _explanationLabel;
	UILabel* _pinCode;
	UIActivityIndicatorView* _spinnerView;
	UIToolbar* _toolbar;
	UIBarButtonItem* _pair;
	UIBarButtonItem* _cancel;
	NRDevice* _incomingDevice;
	NSNumber* _pinCodeValue;
	UIAlertView* _instructionAlert;

}

@property (nonatomic,retain) UILabel * explanationLabel;                         //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,retain) UILabel * pinCode;                                  //@synthesize pinCode=_pinCode - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * pair;                             //@synthesize pair=_pair - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancel;                           //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) NRDevice * incomingDevice;                          //@synthesize incomingDevice=_incomingDevice - In the implementation block
@property (nonatomic,retain) NSNumber * pinCodeValue;                            //@synthesize pinCodeValue=_pinCodeValue - In the implementation block
@property (nonatomic,retain) UIAlertView * instructionAlert;                     //@synthesize instructionAlert=_instructionAlert - In the implementation block
-(void)gotPinAndDevice:(id)arg1 ;
-(void)pair:(id)arg1 ;
-(void)deviceDidBeginActivation:(id)arg1 ;
-(void)_layoutSubViews;
-(UILabel *)explanationLabel;
-(void)setExplanationLabel:(UILabel *)arg1 ;
-(UILabel *)pinCode;
-(void)setPinCode:(UILabel *)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)setPair:(UIBarButtonItem *)arg1 ;
-(NRDevice *)incomingDevice;
-(void)setIncomingDevice:(NRDevice *)arg1 ;
-(NSNumber *)pinCodeValue;
-(void)setPinCodeValue:(NSNumber *)arg1 ;
-(UIAlertView *)instructionAlert;
-(void)setInstructionAlert:(UIAlertView *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(UIBarButtonItem *)cancel;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setCancel:(UIBarButtonItem *)arg1 ;
-(void)cancel:(id)arg1 ;
-(UIBarButtonItem *)pair;
-(UIActivityIndicatorView *)spinnerView;
@end

