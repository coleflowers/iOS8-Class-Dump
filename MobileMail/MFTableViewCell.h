/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface MFTableViewCell : UITableViewCell {

	UIColor* _savedTextColor;
	BOOL _shouldDisableWhileEditing;

}

@property (nonatomic,readonly) double accessoryWidth; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL shouldDisableWhileEditing;              //@synthesize shouldDisableWhileEditing=_shouldDisableWhileEditing - In the implementation block
+(double)defaultAccessoryWidth;
+(double)reorderingAccessoryWidth;
-(void)dealloc;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setShouldDisableWhileEditing:(BOOL)arg1 ;
-(BOOL)shouldDisableWhileEditing;
-(double)accessoryWidth;
@end

