/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface _ASPurchasedCellContentView : UIView {

	UILabel* _publisherLabel;
	UILabel* _restrictionsLabel;
	UILabel* _titleLabel;
	UILabel* _versionLabel;
	NSString* _text;

}

@property (nonatomic,retain) UILabel * publisherLabel;                   //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,retain) UILabel * restrictionsLabel;                //@synthesize restrictionsLabel=_restrictionsLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * versionLabel;                     //@synthesize versionLabel=_versionLabel - In the implementation block
@property (nonatomic,readonly) NSString * publisher; 
@property (nonatomic,readonly) NSString * restrictionsText; 
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * version; 
-(NSString *)restrictionsText;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(UILabel *)publisherLabel;
-(void)setRestrictionsLabel:(UILabel *)arg1 ;
-(UILabel *)restrictionsLabel;
-(void)setVersionLabel:(UILabel *)arg1 ;
-(UILabel *)versionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)version;
-(NSString *)publisher;
@end

