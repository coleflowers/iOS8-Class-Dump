/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIView.h>
#import <FaceTime/DialerLCDFieldProtocol.h>

@protocol DialerLCDFieldDelegate;
@class UILabel, NSString;

@interface PHStarkDialerLCDView : UIView <DialerLCDFieldProtocol> {

	UILabel* _mainNumberLabel;
	id<DialerLCDFieldDelegate> _delegate;
	NSString* _unformattedText;

}

@property (retain) UILabel * mainNumberLabel;                                  //@synthesize mainNumberLabel=_mainNumberLabel - In the implementation block
@property (assign,nonatomic) id<DialerLCDFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * unformattedText;                                 //@synthesize unformattedText=_unformattedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 ;
-(void)deleteCharacter;
-(void)setMainNumberLabel:(UILabel *)arg1 ;
-(UILabel *)mainNumberLabel;
-(NSString *)unformattedText;
-(BOOL)inCallMode;
-(void)setInCallMode:(BOOL)arg1 ;
-(void)setUnformattedText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<DialerLCDFieldDelegate>)arg1 ;
-(id<DialerLCDFieldDelegate>)delegate;
-(id)text;
-(void)setName:(id)arg1 ;
-(id)name;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLabel:(id)arg1 ;
-(BOOL)highlighted;
@end

