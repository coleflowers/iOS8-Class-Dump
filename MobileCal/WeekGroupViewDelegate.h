/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WeekGroupViewDelegate <NSObject>
@optional
-(void)emptySpaceClickedOnDate:(id)arg1;
-(void)weekGroupDidBeginDragging:(id)arg1;
-(void)weekGroupDidScroll:(id)arg1;
-(void)weekGroupDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)weekGroupDidEndDecelerating:(id)arg1;
-(void)weekGroupAllDaySectionDidScroll:(id)arg1;
-(void)weekGroup:(id)arg1 didReceiveTapForDate:(id)arg2;
-(id)weekGroupForWeekBefore:(id)arg1;
-(id)weekGroupForWeekAfter:(id)arg1;
-(void)weekGroup:(id)arg1 didSelectEvent:(id)arg2;
-(void)emptySpaceClick;
-(void)weekGroupViewDidLayout:(id)arg1;
-(void)didEditEvent:(id)arg1;

@end

