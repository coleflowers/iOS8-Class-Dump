/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIDateLabel, UIImageView, NSDictionary, NSLayoutConstraint, CHRecentCall;

@interface PHRecentsCell : UITableViewCell {

	UILabel* _callerNameLabel;
	UILabel* _callerLabelLabel;
	UILabel* _callerCountLabel;
	UIDateLabel* _callerDateLabel;
	UIImageView* _callTypeIconView;
	NSDictionary* _allViewsDictionary;
	long long _buildConstraintsOnceToken;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _dateConstraint;
	NSLayoutConstraint* _dateYConstraint;
	NSLayoutConstraint* _labelConstraint;
	CHRecentCall* _call;

}

@property (nonatomic,retain) CHRecentCall * call;              //@synthesize call=_call - In the implementation block
@property (readonly) long long count; 
@property (readonly) NSDictionary * allViews; 
@property (readonly) NSDictionary * allMetrics; 
+(double)editingMarginWidth;
+(id)allMetrics;
+(id)_sharedOutgoingFaceTimeImage;
+(id)_sharedOutgoingCallImage;
+(double)marginWidth;
-(void)setCall:(CHRecentCall *)arg1 ;
-(void)_buildConstraints;
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(NSDictionary *)allMetrics;
-(NSDictionary *)allViews;
-(CHRecentCall *)call;
-(void)_updateFonts;
-(void)dealloc;
-(long long)count;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateConstraints;
@end

