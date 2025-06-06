package com.ssafy.mmmr.todos.dto;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@Builder
@NoArgsConstructor
@AllArgsConstructor
public class TodoCreateRequestDto {
	private Long profileId;
	private String content;
}
