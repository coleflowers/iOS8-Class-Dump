/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface COSUnpairingViewController : COSSetupPageViewController {

	NSString* _titleString;
	UILabel* _headerLabel;
	UILabel* _activityLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSString * titleString;                                   //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                    //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * activityLabel;                                  //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)presentWithController:(id)arg1 ;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setActivityLabel:(UILabel *)arg1 ;
-(UILabel *)activityLabel;
@end

