/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class City;

@interface LocationPickerCell : UITableViewCell {

	City* city;

}

@property (nonatomic,retain) City * city; 
+(id)grayTextAttributes;
+(id)hightlightTextAttributes;
+(double)height;
-(void)setText:(id)arg1 highlightedText:(id)arg2 ;
-(City *)city;
-(void)setCity:(City *)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_contentString;
@end

