/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMActivityItemSource <UIActivityItemSource>
@property (nonatomic,retain) NSString * activityType; 
@required
-(id)supportedActivityTypes;
-(NSString *)activityType;
-(id)activityViewControllerPlaceholderItem:(id)arg1;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
-(void)setActivityType:(id)arg1;

@end
