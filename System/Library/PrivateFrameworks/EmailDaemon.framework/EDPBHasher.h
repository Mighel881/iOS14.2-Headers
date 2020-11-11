/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDPBHasher
@required
-(long long)hashedAccountID:(id)arg1;
-(id)hashedMessageHeadersForMessage:(id)arg1;
-(long long)hashedConversationID:(long long)arg1;
-(long long)hashedString:(id)arg1;
-(long long)hashedMailboxID:(id)arg1;
-(long long)hashedContactIDForAddress:(id)arg1;
-(SCD_Struct_ED13*)hashedSubject:(id)arg1;

@end
