/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBParagraphProperties : NSObject
+(WrdParagraphProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdParagraphProperties*)arg2 tracked:(WrdParagraphProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(void)mapWordProperties:(WrdParagraphProperties*)arg1 reader:(id)arg2 toProperties:(id)arg3 ;
+(id)formattingChangeDate:(const WrdDateTime*)arg1 ;
@end
