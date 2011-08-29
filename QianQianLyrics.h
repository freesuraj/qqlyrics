//
//  QianQianLyrics.h
//  DynamicLyrics
//
//  Created by Martian on 11-8-8.
//  Copyright 2011年 4321.La. All rights reserved.
//
 
#import <Foundation/Foundation.h>
 
@interface QianQianLyrics : NSObject{
 
}
 
+(NSString*)getLyricsByTitle:(NSString*)Title getLyricsByArtist:(NSString*)Artist;
+(void)getLyricsListByTitle:(NSString *)Title getLyricsListByArtist:(NSString *)Artist AddToArrayController:(NSArrayController*)array_controller Server:(NSInteger)server;
+(NSString*)getLyricsByTitle:(NSString *)Title getLyricsByArtist:(NSString *)Artist getLyricsByID:(NSString *)ID;
 
@end
