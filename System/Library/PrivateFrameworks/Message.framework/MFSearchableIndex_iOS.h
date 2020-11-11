/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EDSearchableIndex.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class NSString;

@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(BOOL)isPluggedIn;
-(id)powerObservable;
-(id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3 ;
-(void)_indexMessage:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3 ;
-(void)indexMessages:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3 ;
-(BOOL)canIndexAttachments;
-(void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2 ;
-(BOOL)shouldCancelSearchQuery;
-(void)addSearchQueryCancelable:(id)arg1 ;
-(void)removeSearchQueryCancelable:(id)arg1 ;
@end
