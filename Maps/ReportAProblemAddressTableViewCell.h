/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Maps/RAPTextFieldInputAccessoryViewDelegate.h>

@protocol RAPAddressCellDelegate;
@class UILabel, ReportAProblemTextField, UIView, CAGradientLayer, NSString, UITextField;

@interface ReportAProblemAddressTableViewCell : UITableViewCell <UITextFieldDelegate, RAPTextFieldInputAccessoryViewDelegate> {

	BOOL isMarkedWrong;
	UILabel* _titleLabel;
	ReportAProblemTextField* _valueField;
	UIView* _verticalBar;
	CAGradientLayer* _gradient;
	id<RAPAddressCellDelegate> _delegate;
	NSString* _previousValue;
	double _verticalBarOffset;
	BOOL _isMarkedWrong;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSString * originalText; 
@property (nonatomic,readonly) double cellHeight; 
@property (assign,nonatomic) BOOL isMarkedWrong;                                      //@synthesize isMarkedWrong=_isMarkedWrong - In the implementation block
@property (assign,nonatomic,__weak) id<RAPAddressCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * valueField;                              //@synthesize valueField=_valueField - In the implementation block
@property (assign,nonatomic) double verticalBarOffset;                                //@synthesize verticalBarOffset=_verticalBarOffset - In the implementation block
@property (assign,nonatomic) long long correctableItemKind; 
@property (assign,nonatomic) BOOL markedWrongButtonEnabled; 
@property (assign,nonatomic) int addressType; 
@property (nonatomic,retain) NSString * previousValue;                                //@synthesize previousValue=_previousValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)verticalBarOffsetForLabelStrings:(id)arg1 ;
+(id)labelFont;
-(BOOL)isMarkedWrong;
-(void)disableDirectionButtonWithDirection:(long long)arg1 ;
-(BOOL)becomeFirstResponderFromDirection:(long long)arg1 ;
-(void)setVerticalBarOffset:(double)arg1 ;
-(void)setCorrectableItemKind:(long long)arg1 ;
-(void)setIsMarkedWrong:(BOOL)arg1 ;
-(void)setMarkedWrongButtonEnabled:(BOOL)arg1 ;
-(void)setIsValueRequired:(BOOL)arg1 ;
-(long long)correctableItemKind;
-(void)fieldChanged:(id)arg1 ;
-(BOOL)markedWrongButtonEnabled;
-(void)reportAProblemTextFieldDidBecomeFirstResponder;
-(void)reportAProblemTextFieldDidResignFirstResponder;
-(void)reportAProblemTextFieldCorrectnessStatusChanged;
-(void)reportAProblemTextFieldNextPressed;
-(void)reportAProblemTextFieldPreviousPressed;
-(BOOL)reportAProblemTextFieldShouldBeMarkedAsWrong;
-(void)removeVerticalBar;
-(double)verticalBarOffset;
-(UITextField *)valueField;
-(double)cellHeight;
-(void)dealloc;
-(void)setDelegate:(id<RAPAddressCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<RAPAddressCellDelegate>)delegate;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(SCD_Struct_Re42)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(NSString *)previousValue;
-(int)addressType;
-(void)setAddressType:(int)arg1 ;
-(void)setOriginalText:(NSString *)arg1 ;
-(void)setPreviousValue:(NSString *)arg1 ;
@end

