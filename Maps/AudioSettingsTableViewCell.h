/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@interface AudioSettingsTableViewCell : UITableViewCell {

	BOOL _cellEnabled;
	double _textIndentation;
	BOOL _checked;

}

@property (assign,nonatomic) BOOL cellEnabled;                    //@synthesize cellEnabled=_cellEnabled - In the implementation block
@property (assign,nonatomic) double textIndentation;              //@synthesize textIndentation=_textIndentation - In the implementation block
@property (assign,nonatomic) BOOL checked;                        //@synthesize checked=_checked - In the implementation block
-(void)setTextIndentation:(double)arg1 ;
-(double)textIndentation;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(BOOL)cellEnabled;
-(BOOL)checked;
@end
