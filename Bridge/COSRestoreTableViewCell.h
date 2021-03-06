/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, COSWatchView, UILabel, NSDateFormatter;

@interface COSRestoreTableViewCell : UITableViewCell {

	UIImageView* _background;
	COSWatchView* _watchView;
	UILabel* _deviceTitleLabel;
	UILabel* _deviceMaterialLabel;
	UILabel* _deviceLastBackupDetailLabel;
	UILabel* _deviceCaseSizeLabel;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) UIImageView * background;                           //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) COSWatchView * watchView;                           //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,readonly) UILabel * deviceTitleLabel;                         //@synthesize deviceTitleLabel=_deviceTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * deviceMaterialLabel;                      //@synthesize deviceMaterialLabel=_deviceMaterialLabel - In the implementation block
@property (nonatomic,readonly) UILabel * deviceLastBackupDetailLabel;              //@synthesize deviceLastBackupDetailLabel=_deviceLastBackupDetailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * deviceCaseSizeLabel;                      //@synthesize deviceCaseSizeLabel=_deviceCaseSizeLabel - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(COSWatchView *)watchView;
-(void)setRestoreDetails:(id)arg1 ;
-(UILabel *)deviceTitleLabel;
-(UILabel *)deviceMaterialLabel;
-(UILabel *)deviceLastBackupDetailLabel;
-(UILabel *)deviceCaseSizeLabel;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)background;
@end

