/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:53 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLeafIconDataSource <NSObject>
@required
-(id)icon:(id)arg1 imageWithFormat:(int)arg2;
-(id)iconFormattedAccessoryString:(id)arg1;
-(unsigned long long)iconPriority:(id)arg1;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
-(id)iconDisplayName:(id)arg1;
-(BOOL)iconCanEllipsizeLabel:(id)arg1;
-(BOOL)iconCanTightenLabel:(id)arg1;
-(BOOL)iconAppearsInNewsstand:(id)arg1;
-(long long)iconProgressState:(id)arg1;
-(double)iconProgressPercent:(id)arg1;
-(BOOL)iconProgressIsPaused:(id)arg1;
-(id)iconBadgeNumberOrString:(id)arg1;
-(int)iconAccessoryType:(id)arg1;
-(BOOL)iconIsRecentlyUpdated:(id)arg1;
-(BOOL)iconIsBeta:(id)arg1;
-(BOOL)iconAllowsUninstall:(id)arg1;
-(BOOL)iconCompleteUninstall:(id)arg1;
-(BOOL)iconAllowsLaunch:(id)arg1;
-(BOOL)icon:(id)arg1 launchFromLocation:(int)arg2;

@end

